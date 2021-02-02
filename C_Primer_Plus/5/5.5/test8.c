#include <stdio.h>
#define ALPHA 'g'
int main(void){


        char ch = 'a';
        
        while(ch <= ALPHA){
                printf("%5c", ch++);
        }
        printf("\n");

        return 0;
}
