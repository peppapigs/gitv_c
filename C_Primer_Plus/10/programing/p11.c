#include <stdio.h>
#define ROWS 3
#define COLS 5

void show(int (* pt)[COLS], int row);
void double_arr(int (* arr)[COLS], int row);
int main(void){

        int arr[ROWS][COLS] = {
                {1, 2, 3, 4, 5},
                {6, 7, 8, 9, 0},
                {1, 2, 3, 4, 5}
        };

        /*实际参数为行指针*/
        printf("array:\n");
        show(arr, ROWS);
        double_arr(arr, ROWS);

        printf("double array:\n");
        show(arr, ROWS);
        return 0;
}

/*形式参数为行指针：指向数组的指针*/
void double_arr(int (* arr)[COLS], int row){

        int i, j;
        for(i = 0; i < row; i ++){
                for(j = 0; j < COLS; j ++)
                        arr[i][j] *= 2;
        }
}

void show(int (* pt)[COLS], int row){

        int i, j;
        for(i = 0; i < row; i ++){
                for(j = 0; j < COLS; j ++)
                        printf("%3d", *(*(pt + i) + j));
                printf("\n");
        }
}
