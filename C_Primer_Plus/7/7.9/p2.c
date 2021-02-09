#include <stdio.h>

int main(void){

        int ch_num = 0;
        char ch;

        printf("please enter chars:\n");        
        while((ch = getchar()) != '#' && ch != '\n'){
               printf("%c: %3d  ", ch, ch);
               ch_num ++;
               if(ch_num % 8 == 0){
                       printf("\n");
               }
        }

        return 0;

}
