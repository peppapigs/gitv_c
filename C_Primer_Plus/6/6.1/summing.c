#include <stdio.h>
/*
 *  scanf返回值的应用
 */
int main(void){

        int num;
        int sum = 0;

        printf("please enter some number:");
        while( scanf("%d", &num) ){
                sum = sum + num;
                printf("please enter another number: ");
        }

        printf("sum = %d.\n", sum);
        return 0;
}
