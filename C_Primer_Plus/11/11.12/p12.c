#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 60

int check_word(char * input);

int main(void){
        char input[SIZE];

        char * pt;      //定义一个指针来操作字符串
        pt = input;

        printf("please enter a string:\n");
        while(gets(input) && input[0] != '\0'){
                printf("word count: %d.\n", check_word(pt));

                printf("continue enter a string:\n");
        }

        puts("Done!");
        return 0;
}

int check_word(char * input){

        int words = 0;
        bool inword = false;  //字符在单词内?

        //  this is a sample!
        while(*input){

                if(!isspace(*input) && inword == false){
                        inword = true;
                        words ++;
                }
                if(isspace(*input) && inword == true)      //开启 记值
                        inword = false;
                input ++;
        }
        return words;
}
