#include <stdio.h>


int main(void){
        unsigned int width;
        int num = 256;

        printf("what is the field width?\n");
        scanf("%d", &width);

        printf("the number is: *%*d*\n", width, num);
        return 0;
}

