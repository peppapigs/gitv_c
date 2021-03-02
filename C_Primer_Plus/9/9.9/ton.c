#include <stdio.h>

void to_base_n(unsigned long, int);

int main(void){

        unsigned long number;

        int x;
        printf("enter a integer and the (2~10)base(q to quit):\n");

        while(scanf("%lu%d", &number, &x) == 2){

                printf("binary equivalent: ");
                to_base_n(number, x);

                while(getchar() != '\n')
                        continue;

                putchar('\n');
                printf("enter two integer(q to quit):\n");
        }

        printf("bye!\n");
        return 0;
}

void to_base_n(unsigned long n, int x){
        /*此处采用递归方式: 每一次调用旨在拿出最后一位*/
        /*recursion before*/

        int r;  //最后一位
        r = n % x;

        /*recursion*/
        if(n >= x)
                to_base_n(n/x, x); //对于二进制数处以2就意味着去掉最后一位

        /*recursion after*/
        putchar('0' + r);
}
