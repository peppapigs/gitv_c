#include <stdio.h>

int main(void)
{
        float unit = 3.0e-23;
        float w = 950;
        float quatos;
        printf("please enter quato num:");
        
        scanf("%f", &quatos);
        printf("%f quato has %e\n", quatos, quatos*w/unit);
        return 0;
}
