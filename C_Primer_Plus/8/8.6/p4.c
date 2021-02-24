#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


int main(void){

        int ch;
        int words_cnt = 0;
        int letter_cnt = 0;

        printf("please enter the string.\n");
        bool isword = true; //用来判断是单词开头

        while((ch = getchar()) != EOF){

                /*判断字母和数字*/
                if(isblank(ch) || ispunct(ch))
                        ;
                else
                        letter_cnt ++;

                /*判断单词*/
                if(isalnum(ch) && isword){
                        words_cnt ++;
                        isword = false;
                }
                if(isblank(ch) || ispunct(ch))
                        isword = true;
        }

        printf("words_cnt: %d, letter_cnt: %d.\n", words_cnt, letter_cnt);
        printf("average letter for per word: %.2f.\n", (float)letter_cnt/(float)words_cnt);

        return 0;
}
