#include <stdio.h>
#include <stdlib.h>
#define BUF     256

/*"+p: 将系统剪切板寄存器的复制的内容粘贴到此处*/
int main(int argc, char * argv[]){

        char line[BUF];    //因为用于存储不定数量字符的一行内容，所以采用指针更合适
        FILE * fp;
        int index = 0;

        if(argc == 3){
                /*输入正确直接打开文件*/
                if((fp = fopen(argv[2], "r")) == NULL){
                        fprintf(stderr, "%s can not be opened.\n", argv[2]);
                        exit(1);
                }
        }
        else{
                fprintf(stderr, "Usage: %s character filename.\n", argv[0]);
                exit(2);
        }
 

        printf("string including %s:\n", argv[1]);
        /*有没有一次能从文件中取出一行的函数*/
        /*假设：一行字符不超过256个字符情况*/
        while(fgets(line, BUF, fp) != NULL){
                
                printf("%s\n", line); 
                
                /*关键index = 0*/
                index = 0;
                while(line[index] != '\0'){

                        if(line[index++] == argv[1][0]){
                                printf("find %s in %s.\n", argv[1], line);
                                break;
                        }
                }
        }

        fclose(fp);
        return 0;
}
