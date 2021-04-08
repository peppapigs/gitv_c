#include <stdio.h>
#include <stdlib.h>

#define SIZE    10

int cmp(const void *a, const void *b);

int main(void){

        int i;

        int arr[SIZE] = {6, 3, 8, 20, 5, 11, 9, 1, 23, 18};

        qsort(arr, SIZE, sizeof(int), cmp);

        for(i = 0; i < SIZE; i ++){
                printf("%4d", arr[i]);
        } 

        putchar('\n');
        return 0;
}

int cmp(const void *a, const void *b){

        int elem_val1 = *((int *)a);
        int elem_val2 = *((int *)b);

        return elem_val1 - elem_val2;
}
