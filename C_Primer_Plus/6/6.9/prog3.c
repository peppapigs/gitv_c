#include <stdio.h>

int main(void){

        printf("please enter the end char: ");

        char ch;
        scanf("%c", &ch);
        
        int row = ch - 'A' + 1;
        int len = 2 * (ch - 'A') + 1;

        for (int i = 0; i < row; i ++){
                for(int j = 0; j < (row - 1 - i); j ++)
                        printf(" ");
                for(char k1 = 'A'; k1 <= 'A' + i; k1 ++)
                        printf("%c", k1);

                for(char k2 = 'A' + i; k2 > 'A'; k2 --)
                        printf("%c", k2 - 1);

                printf("\n");

        }
        return 0;
}
