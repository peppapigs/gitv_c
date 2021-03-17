#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define SIZE 50

void get_word(char input[]);
int main(void){

        char input[SIZE];

        puts("please enter a string and will get a word:");
        get_word(input);

        puts("result:");
        puts(input);

        return 0;
}

void get_word(char input[]){

        int i = 0;
        char ch;
        while( isspace( ch = getchar() ) );


        bool flag = true;

        while(!isspace(ch) && flag){

                input[i++] = ch;
                ch = getchar();

                if(isspace(ch))
                        flag = false;
        }
        input[i] = '\0';
}
