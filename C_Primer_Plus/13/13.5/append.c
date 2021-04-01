#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN       81 
#define BUFSIZE    1024

/*功能：类似cat a.c b.c | total.c*/

/*
 *将文件信息(名称)告知程序的方式：
 *      1. 命令行参数形式
 *      2. 交互式方式
 *
 *      本例子：采用交互式
 *
 */

void append(FILE * source, FILE * dest);

int main(void){

        char file_app[SLEN];
        char file_src[SLEN];
        FILE * fa;
        FILE * fs;
        int files = 0;

        puts("Enter the name destination file:");
        gets(file_app);

        /*打开aim目标文件*/
        if((fa = fopen(file_app, "a+")) == NULL){
                fprintf(stderr, "file %s open fail.\n", file_app);
                exit(1);
        }

        puts("Enter name of the first source(empty line to quit)");
        while(gets(file_src) != NULL && file_src[0] != '\0'){

                /*判断1*/
                if(strcmp(file_src, file_app) == 0)
                        fputs("Can not append file to itself.\n", stderr);
                /*打开source来源文件失败*/
                else if((fs = fopen(file_src, "r")) == NULL){
                        fprintf(stderr, "file %s open fail.\n", file_src);
                        exit(2);
                }
                /*打开source来源文件成功*/
                else{
                        /*追加函数*/
                        append(fs, fa);
                        /*在追加函数执行过程中当读发生错误时*/
                        if(ferror(fs) != 0){
                            fprintf(stderr, "Error in reading file %s.\n", file_src); 
                            exit(3);
                        }
                        /*在追加函数执行过程中当写发生错误时*/
                        if(ferror(fa) != 0){
                            fprintf(stderr, "Error in writing file %s.\n", file_app); 
                            exit(4);
                        }

                        if(fclose(fs) != 0){
                            fprintf(stderr, "Error in closing file %s.\n", file_src); 
                            exit(5);
                        }

                        ++ files;
                        printf("file %s has been appended.\n", file_src);

                        /*进入下一次while循环*/
                        puts("Next file(empty line to quit)");
                        rewind(fa);

                }//else
        }//while

        printf("%d file has been appended.\n", files);

        if(fclose(fa) != 0){
            fprintf(stderr, "Error in closing file %s.\n", file_app); 
            exit(6);
        }
        
        return 0;
}

/**/
void append(FILE * source, FILE * dest){

        size_t bytes;
        static char temp[BUFSIZE];      //静态全局变量(块作用域)

        while( (bytes = fread(temp, sizeof(char), BUFSIZE, source) ) > 0)
                fwrite(temp, sizeof(char), bytes, dest);
}
