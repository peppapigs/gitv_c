#include <stdio.h>
#include <string.h>
#define SIZE 80

int main(void){

        char flower[SIZE];
        char addon [] = "s smell like old shoes.";
        puts("what's you favorite flower?");
        gets(flower);

        strcat(flower, addon);
        puts(flower);

        return 0;
}
