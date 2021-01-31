#include <stdio.h>

/*
 *  精度丢失问题
 *
 */
int main(void)
{
        int cost = 12.99;
        float pi = 3.1415926536;
        
        printf("cost: %d\npi: %f\n", cost, pi);
        return 0;
}
