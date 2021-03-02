#include <stdio.h>

void to_binary(unsigned long);

int main(void){

        unsigned long number;

        printf("enter a integer(q to quit):\n");

        while(scanf("%lu", &number) == 1){

                printf("binary equivalent: ");
                to_binary(number);

                while(getchar() != '\n')
                        continue;

                putchar('\n');
                printf("enter a integer(q to quit):\n");
        }

        printf("bye!\n");
        return 0;
}

void to_binary(unsigned long n){
        /*此处采用递归方式: 每一次调用旨在拿出最后一位*/
        /*recursion before*/

        int r;  //最后一位
        r = n % 2;

        /*recursion*/
        if(n >= 2)
                to_binary(n/2); //对于二进制数处以2就意味着去掉最后一位

        /*recursion after*/
        putchar('0' + r);
}
