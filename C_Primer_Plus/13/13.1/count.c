#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

        FILE * fp;

        int ch;
        int count = 0;

        if(argc != 2){
                printf("Usage: %s filename.\n", argv[0]);
                exit(EXIT_FAILURE);
        }

        /*打开文件对象*/
        if((fp = fopen(argv[1], "r")) == NULL){
                printf("Can't open %s\n", argv[1]);
                exit(EXIT_FAILURE);
        }

        /*循环读取文件字符*/
        while((ch = getc(fp)) != EOF){

                putc(ch, stdout);
                ++ count;
        }

        printf("%s has %d characters.\n", argv[1], count);

        fclose(fp);
        return 0;
}
