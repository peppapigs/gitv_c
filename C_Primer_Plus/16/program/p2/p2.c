#include <stdio.h>
#include "p2.h"


int main(void){

        double x, y;

        x = 6.0;
        y = 8.0;

        printf("hamonic mean(%g, %g): %.2lf\n", x, y, HARMONIC_MEAN(x,y));
        return 0;
}
