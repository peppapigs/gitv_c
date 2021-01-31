#include <stdio.h>

/*
 *  浮点数的溢出:float类型发生上溢出，打印出无限inf
 */

int main(void)
{
        float toobig = 3.4e38 * 100.0f;
        printf("toobig: %f\n", toobig);
        return 0;
}
