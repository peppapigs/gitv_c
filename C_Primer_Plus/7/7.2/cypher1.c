#include <stdio.h>

int isalpha(char );

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

int isalpha(char ch){
       if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
               return 1;
       else
               return 0;
}
