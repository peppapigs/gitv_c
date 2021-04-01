#include <stdio.h>
#include <stdlib.h>
#define SIZE    40

int main(void){

        FILE * fp;

        int ch;
        int count = 0;
        char file[SIZE];

        puts("please enter the name of file:");

        gets(file);


        /*打开文件对象*/
        if((fp = fopen(file, "r")) == NULL){
                printf("Can't open %s\n", file);
                exit(EXIT_FAILURE);
        }

        /*循环读取文件字符*/
        while((ch = getc(fp)) != EOF){

                putc(ch, stdout);
                ++ count;
        }

        printf("%s has %d characters.\n", file, count);

        fclose(fp);
        return 0;
}
