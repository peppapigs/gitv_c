#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
        int i;
        int j;
        FILE * fp;
        int rows = atoi(argv[1]);
        int columns = atoi(argv[2]);

        if(argc != 4){
                fprintf(stderr, "Usage:%s rows columns filename\n",argv[0]);
                exit(1);
        }

        if((fp = fopen(argv[3], "w")) == NULL){
                fprintf(stderr, "file %s open failure.\n", argv[3]);
                exit(2);
        }

        for(i = 0; i < rows; i ++){
                for(j = 0; j < columns; j ++){
                        fprintf(fp, "%d ", 0);
                }
                putc('\n', fp);
        }

        if(fclose(fp) != 0){
                fprintf(stderr, "file %s open failure.\n", argv[3]);
                exit(3);
        }
        return 0;
}
