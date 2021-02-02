#include <stdio.h>

/*
 *  负数的取模运算: 模数符号 仅仅与被除数符号相同
 *
 */
int main(void){


        printf("11%(-5) = %d\n", 11%(-5));
        printf("-11%5 = %d\n", -11%(5));
        printf("-11%(-5) = %d\n", -11%(-5));
        return 0;
}
