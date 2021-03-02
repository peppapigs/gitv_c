#include <stdio.h>
#include <ctype.h>

int main(void){

                printf("please enter a row words:\n");

                char ch;
                while('\n' != (ch = getchar())){
                       if(isalpha(ch))
                           putchar(++ch);
                       else
                           putchar(ch);
                } 

                putchar(ch);
                return 0;
}

