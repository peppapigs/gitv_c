#include <stdio.h>


int main(void){
        unsigned int width, precision;
        int num = 256;
        float weight = 242.5;

        printf("what is the field width?\n");
        scanf("%d", &width);

        printf("the number is: *%*d*\n", width, num);
        

        printf("please enter width and precision:\n");
        
        scanf("%d %d", &width, &precision);
        printf("the float number is: *%*.*f*\n", width, precision, weight);
        return 0;
}

