#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BASE 10
#define SIZE 100

void show_arr(int arr[], int number);

int main(void){

        int arr[SIZE];
        int i;
        int j;
        int temp;

        /*1~10：100个随机数*/
        srand((unsigned int)time(0));
        for(i = 0; i < SIZE; i ++){
                arr[i] = (rand() % BASE) + 1;
        }

        show_arr(arr, SIZE);

        /*desc sort*/
        for(i = 0; i < SIZE - 1; i ++){
                for(j = i + 1; j < SIZE; j ++){
                        if(arr[i] < arr[j]){
                                /*换位*/
                                temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                                
                        }
                }
        }
        show_arr(arr, SIZE);
        
        return 0;
}

void show_arr(int arr[], int number){

        int i;
        for(i = 0; i < number; i ++){

                if(i % 10 == 0)
                        printf("\n");
                printf("%4d", arr[i]);
        }
        printf("\n");
}
