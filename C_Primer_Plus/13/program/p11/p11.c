#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*假设：文件中的所有行都不超过255个字符*/
#define MAXSIZE     255


int main(int argc, char * argv[]){

        char temp[MAXSIZE];
        FILE * fp;

        if(argc != 3){
                fprintf(stderr, "Usage: %s str filename\n", argv[0]);
                exit(EXIT_FAILURE);
        }

        if((fp = fopen(argv[2], "r")) == NULL){
                fprintf(stderr, "file %s open failure.\n", argv[2]);
                exit(EXIT_FAILURE);
        }

        while(fgets(temp, MAXSIZE, fp) != NULL){
                if(strstr(temp, argv[1]) != NULL) //在temp中找到了argv[1]字符串
                        fputs(temp, stdout);
        }

        if(fclose(fp) != 0){
                fprintf(stderr, "file %s close failure.\n", argv[2]);
                exit(EXIT_FAILURE);
        }
        return 0;
}
