#include <stdio.h>
#include <stdlib.h>

/*printf the content of files one by one*/

int main(int argc, char * argv[]){

        FILE * fp;
        int i;
        int ch;

        if(argc < 2){
                fprintf(stderr, "Usage: %s filename [filename...].\n", argv[0]);
                exit(1);
        }

        for(i = 1; i < argc; i ++){

                if((fp = fopen(argv[i], "r")) == NULL){
                        fprintf(stderr, "%s can not be opened.\n", argv[i]);
                        exit(2);
                }

                puts("***************************************");
                while((ch = getc(fp)) != EOF){
                        putc((char)ch, stdout);
                }
                puts("***************************************");

                if(fclose(fp) != 0){
                        fprintf(stderr, "%s close failure.\n", argv[i]);
                        exit(3);
                }
        }

        
        return 0;
}
