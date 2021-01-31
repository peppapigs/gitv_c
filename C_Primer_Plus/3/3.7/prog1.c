#include <stdio.h>
#include <limits.h>   // INT_MAX INT_MIN
#include <float.h>    // FLT_MAX FLT_MIN

int main(void)
{
        
        int in = 2147483647;
        float fl = 3.402823e38 * 100.0f;

        float fl1 = 1.175494e-38 / 100.0f;

        printf("%d,%d,%d\n", in, in+1, in+2);

        printf("%e\n", fl); //上溢出inf
        printf("%e\n", fl1);    //下溢出底数部分精度丢失
        printf("INT_MAX: %d, INT_MIN: %d\n", INT_MAX, INT_MIN);
        
        printf("FLT_MAX: %e, FLT_MIN: %e\n", FLT_MAX, FLT_MIN);
        
        return 0;
}
