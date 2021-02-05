#include <stdio.h>
#define END 'J'
int main(void){

        int times;
        printf("please enter times:");
        scanf("%d", &times);
        
        for(int row = 0; row < times; row ++){
                for(char ch = 'A'+ row; ch <= END; ch ++){
                        printf("%c", ch);
                }
                printf("\n");
        } 
        return 0;
}
