#include <stdio.h>
#define SPACE ' ' 
int main(void){

                printf("please enter a row words:\n");

                char ch;
                while('\n' != (ch = getchar())){
                       if(ch == SPACE) 
                           putchar(ch); 
                       else
                           putchar(++ch);
                } 

                printf("\n");
                return 0;

}
