/*
 *溢出:
 */
#include <stdio.h>


int main(void)
{
        int i = 2147483647;
        int j = -2147483648;
        unsigned int x = 4294967295;
        printf("2147483647+1=%d\n", i+1);
        printf("-2147483647-1=%d\n", j-1);
        printf("4294967295+1=%u\n",x+1);
        return 0;
}
