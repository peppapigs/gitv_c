#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


int main(void){

        int ch;
        int words_cnt = 0;
        int letter_cnt = 0;

        printf("please enter the string.\n");
        bool word_flag = false; //用来判断是单词开头

        while((ch = getchar()) != EOF){

                if(!isspace(ch) && !ispunct(ch)){
                        letter_cnt ++;
                        
                        if(!word_flag){
                                words_cnt ++;
                                word_flag = true;
                        }
                }

                if(isspace(ch) || ispunct(ch))
                        word_flag = false;
        }

        printf("words_cnt: %d, letter_cnt: %d.\n", words_cnt, letter_cnt);
        printf("average letter for per word: %.2f.\n", (float)letter_cnt/(float)words_cnt);

        return 0;
}
