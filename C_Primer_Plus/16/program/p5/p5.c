#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE    10

void select_n(const int arr[], int size, int n);

int main(void){

        int num;
        int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

        puts("Please enter a interger(<0 to quit):");
        while(scanf("%d", &num) == 1 && num <= SIZE && num > 0){

                select_n(arr, SIZE, num);
                puts("Continue enter a interger(<0 to quit):");
        }

        puts("Bye!");
        return 0;
}


void select_n(const int arr[], int size, int n){

        int flag[SIZE] = {0};   //访问标记数组
        int index;

        srand(time(0));

        while(n > 0){
                index = rand() % size;
                if(flag[index] == 0){   //判断访问数组下标是否访问过

                    flag[index] = 1;
                    printf("num %d:%d\n", index, arr[index]);
                    n --;
                }
        }
}
