#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE     256

int main(int argc, char * argv[]){

        /*假定一行最多256个字符*/

        char temp1[MAXSIZE];
        char temp2[MAXSIZE];
        FILE * fp1;
        FILE * fp2;

        if(argc != 3){
                fprintf(stderr, "Usage: %s filename1 filename2\n", argv[0]);
                exit(EXIT_FAILURE);
        }

        if((fp1 = fopen(argv[1], "r")) == NULL){
                fprintf(stderr, "%s can not be opened.\n", argv[1]);
                exit(EXIT_FAILURE);
        }
        if((fp2 = fopen(argv[2], "r")) == NULL){
                fprintf(stderr, "%s can not be opened.\n", argv[2]);
                exit(EXIT_FAILURE);
        }

        /*流程思路:考虑条件下的执行与跳出该循环条件的可能性，在针对这些可能性进行处理*/
        while((fgets(temp1,MAXSIZE,fp1) != NULL)&&(fgets(temp2,MAXSIZE,fp2) != NULL)){
                int enter = strlen(temp1) - 1;   //回车字符下标
                temp1[enter] = '\0';
                fputs(temp1, stdout);

                fputs(temp2, stdout);
        }

        if(temp1 == NULL){
                fclose(fp1);        //关闭已经读取完的文件很重要
                fputs(temp2, stdout);
                while(fgets(temp2, MAXSIZE, fp2) != NULL)
                        fputs(temp2, stdout);
                putchar('\n');
        }
        else{
                fclose(fp2);
                fputs(temp1, stdout);
                while(fgets(temp1, MAXSIZE, fp1) != NULL)
                        fputs(temp1, stdout);
                putchar('\n');
        }

        return 0;
}
