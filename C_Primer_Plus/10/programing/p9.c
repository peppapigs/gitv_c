#include <stdio.h>

#define ROWS 7
#define COLS 3

void copy_ptr(int m, int n, double source[m][n], double target[m][n]);
void show_arr(int m, int n, double target[m][n]);

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

        /*1.定义变长数组*/
        int rs = 3;
        int cs = 3;
        double target[rs][cs];

        copy_ptr(3, 3, source + 2, target); //
        show_arr(3, 3, target);
        return 0;
}

/*2.形式参数：二维变长数组的形式参数*/
/*变长数组函数可以处理各种传过来的实参的数组来处理*/
void copy_ptr(int m, int n, double source[m][n], double target[m][n]){

        int i, j;
        for(i = 0; i < m; i ++){
                for(j = 0; j < n; j ++)
                        target[i][j] = source[i][j];
        }
}


void show_arr(int m, int n, double target[m][n]){

        int i, j;
        for(i = 0; i < m; i ++){
                for(j = 0; j < n; j ++)
                        printf("%5g", target[i][j]);
            printf("\n");
        }
}
