#include <stdio.h>

void pound(int);

int main(void){

        int times = 5;
        char ch = '!';
        float f= 6.0;

        pound(times);
        pound(ch); //隐式转换
        pound((int)f);
        return 0;
}

void pound(int n){

        while(n-- > 0){
                
                printf("#");
        }

        printf("\n");
        return ;
}
