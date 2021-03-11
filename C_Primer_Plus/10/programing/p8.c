#include <stdio.h>

#define ROWS 7
#define COLS 3

#define ROWS1 3

void copy_ptr(const double *source, double *target, int n);
void show_arr(const double *target, int n);

int main(void){

        double source[ROWS][COLS] = {
                                        {1.1, 2.2, 3.3},
                                        {4.4, 5.5, 6.6},
                                        {7.7, 8.8, 9.9},
                                        {1.1, 2.2, 3.3},
                                        {4.4, 5.5, 6.6},
                                        {1.1, 2.2, 3.3},
                                        {7.7, 8.8, 9.9}
                                    };
        double target[ROWS1][COLS];

        /*使实参传递的为一维数组,来与函数形参一维数组指针匹配*/
        copy_ptr(source[2], target[0], ROWS1 * COLS);
        show_arr(target[0], ROWS1 * COLS);
        return 0;
}

void copy_ptr(const double *source, double *target, int n){

        int index;
        for(index = 0; index < n; index ++)
                *target ++ = *source ++;
}


void show_arr(const double *target, int n){
        int index;
        for(index = 0; index < n; index ++)
                printf("%5g", *target++);
        printf("\n");
}
