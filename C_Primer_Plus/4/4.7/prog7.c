#include <stdio.h>
#define G_L 3.785
#define M_K 1.609


int main(void){


        float miles;
        float gallons;

        printf("please enter you run miles:\n");
        scanf("%f", &miles);
        printf("please enter you used gallons:\n");
        scanf("%f", &gallons);

        printf("ran %.1f miles with per gallon\n", miles/gallons);
        printf("used %.1fL for with 100 kilometers\n",
              (gallons*G_L)/(miles*M_K/100));
        return 0;
}
