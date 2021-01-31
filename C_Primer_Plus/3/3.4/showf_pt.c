#include <stdio.h>



int main(void)
{
        float aboat = 32000.0;
        double abet = 2.14e9;

        printf("%.2f can be write as %.2e.\n", aboat, aboat);
        printf("%.2e can be write as %.2f.\n", abet, abet);


        return 0;
}
