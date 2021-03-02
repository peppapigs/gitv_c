#include <stdio.h>

void up_and_down(int );

int main(void){

        up_and_down(1);
        return 0;
}

void up_and_down(int n){

        printf("level %d: n location is %p.\n", n, &n); //递归调用前的语句

        if(n < 4)
                up_and_down(n + 1); //递归调用语句

        printf("level %d: n location is %p.\n", n, &n); //递归调用后的语句
}
