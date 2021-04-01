#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char * argv[]){

        FILE * src;
        FILE * cp;
        char ch;


        if(argc == 3){
                if((src = fopen(argv[1], "r")) == NULL){
                        fprintf(stderr, "%s can not be opened.\n", argv[1]);
                        exit(1);
                }
        }
        else{
                fprintf(stderr, "Usage: %s source copy\n", argv[0]);
                exit(2);
        }


        if((cp = fopen(argv[2], "w")) == NULL){
                fprintf(stderr, "%s can not be opened.\n", argv[2]);
                exit(3);
        }

        while((int)(ch = toupper(getc(src))) != EOF){
                putc((char)ch, cp);
        }

        if(fclose(src) != 0 || fclose(cp) != 0){
                fprintf(stderr, "file close failure.\n");
                exit(4);
        }
        
        return 0;
}
