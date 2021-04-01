#include <stdio.h>
#include <stdlib.h>
#define SIZE    50

/*文件字符反序列输出*/
int main(void){

        puts("Enter a name of file to be processed:");

        FILE * fp;
        char file[SIZE];
        long len, count;
        char ch;

        gets(file);
        if((fp = fopen(file, "r")) == NULL){

                        fprintf(stderr, "file %s open failed.\n", file);
                        exit(1);
        }

        fseek(fp, 0L, SEEK_END);    //定位到文件末尾

        len = ftell(fp);

        for(count = 1; count <= len; count ++){

                        fseek(fp, -count, SEEK_END);
                        ch = getc(fp);
                        putchar(ch);
        }

        putchar('\n');

        /*close file*/
        if(fclose(fp) != 0){
                fprintf(stderr, "file %s close failed.\n", file);
                exit(2);
        }

        return 0;
}
