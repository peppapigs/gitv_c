#include <stdio.h>
#define SIZE 10
#define LIM 8
int main(void){


        int arr[SIZE];
        int index;

        printf("please enter 8 numbers:\n");
        for(index = 0; index < LIM; index ++){
               scanf("%d", &arr[index]); 
        }

        printf("desc sort:\n");
        for(index = LIM - 1; index >= 0; index --){
                printf("%d ", arr[index]);
        }
        
        printf("\n");
        return 0;
}
