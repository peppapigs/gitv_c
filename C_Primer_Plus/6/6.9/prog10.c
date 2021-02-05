#include <stdio.h>
#define SIZE 8

int main(void){

        double arr[SIZE];
        double arr2[SIZE] = {0};

        printf("please enter 8 numbers:\n");

        int index;
        for(index = 0; index < SIZE; index ++){
                scanf("%lf", &arr[index]);
        }

        printf("\n");

        for(index = 0; index < SIZE; index ++){

                arr2[index] = arr2[(0==index ? 0 : index-1)] + arr[index];
                printf("arr2[%d]: %.2lf ", index, arr2[index]);
        }
        printf("\n");

        return 0;
}
