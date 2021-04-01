#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40

int main(int argc, char * argv[]){

        FILE *in, *out;
        int ch;                 //int because of EOF
        char name[SIZE];
        int count = 0;

        if(argc != 2){
                fprintf(stderr, "%s inputfile outputfile.\n", argv[0]); //标准错误输出
                exit(1);
        }

        if( (in = fopen(argv[1], "r")) == NULL){
                fprintf(stderr, "Usage: %s can not opened.\n", argv[1]);
                exit(2);
        }

        /*new file*/
        strncpy(name, argv[1], strlen(argv[1]));
        name[strlen(argv[1])] = '\0';
        strcat(name, ".red");

        if( (out = fopen(name, "w")) == NULL){
                fprintf(stderr, "Usage: %s output file can not opened.\n", name);
                exit(3);
        }

        while((ch = getc(in)) != EOF){

                if(count++ % 3 == 0)
                        putc(ch, out);
        }

        /*close 判断*/
        if(fclose(in) != 0 || fclose(out) != 0)
                fprintf(stderr, "Error in closing files.\n");

        return 0;
}
