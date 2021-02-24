#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void){

        char ch;
        printf("please enter a character:");
        ch = get_first();
        printf("the first character(not null): %c.\n", ch);

        return 0;
}

char get_first(void){

        char ch;
        ch = getchar();
        
        while(isspace(ch)){
                ch = getchar();
        }
        while(getchar() != '\n')
                continue;

        return ch;
}
