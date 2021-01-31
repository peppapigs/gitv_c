#include <stdio.h>


int main(void)
{
        const double RENT = 3852.99;

        printf("*%f*\n", RENT);
        printf("*%e*\n", RENT);
        printf("*%4.2f*\n", RENT);
        printf("*%3.1f*\n", RENT); //四舍五入

        printf("*%10.2f*\n", RENT);
        printf("*%10.2e*\n", RENT);//小数点后四舍五入
        printf("*%+4.2f*\n", RENT);
        printf("*%010.2f*\n", RENT);//用前导0而不是空格来填充字段宽度
        return 0;
}
