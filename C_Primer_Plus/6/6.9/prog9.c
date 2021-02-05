#include <stdio.h>
#define SIZE 8

int n_times(int , int );

int main(void){


        int index;
        int arr[SIZE];
        const int BASIC = 2;

        for(index = 0; index < SIZE; index ++){
                arr[index] = n_times(BASIC, index);
        }

        int index2 = 0;
        do{
                printf("%d ", arr[index2++]);
        }while(index2 < SIZE);

        printf("\n");
        return 0;
}

int n_times(int BASIC, int index){

        int result = 1;
        for(int i = 0; i < index; i ++){

                result *= BASIC;
        }
        return result;

}
