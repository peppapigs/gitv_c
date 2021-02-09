#include <stdio.h>

int main(void){

        int num = 0;

        char ch;
        
        printf("please enter chars:\n");
        while((ch = getchar()) != '#'){
                if(ch == '.'){
                        num ++;
                        printf("!");
                }
                else if(ch == '!'){
                        num ++;
                        printf("!!");
                }
                else
                        printf("%c", ch);
        }

        printf("modified number: %d.\n", num);
        return 0;
}
