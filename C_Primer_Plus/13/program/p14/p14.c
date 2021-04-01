#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROWS    20
#define COLS    30


char trans(int arr[][COLS], int row, int col);
void eliminate_distortion(int arr[][COLS], int row, int col);

int main(int argc, char * argv[]){

        int bit[ROWS][COLS];
        char ch[ROWS][COLS + 1];
        int i;
        int j;
        int value;
        FILE * fp;

        if(argc != 3){
                fprintf(stderr, "Usage: %s inputfile outputfile\n", argv[0]);
                exit(1);
        }

        if((fp = fopen(argv[1], "r")) == NULL){
                fprintf(stderr, "file %s open failure.\n", argv[1]);
                exit(2);
        }


        /*将文件中的数值存入int数组*/
        for(i = 0; i < ROWS; i ++){
                for(j = 0; j < COLS; j ++){
                        fscanf(fp, "%d", &bit[i][j]);
                }
        }

        /*将int数组转换输出到ch数组之前   ～先做消除失真函数处理*/
        eliminate_distortion(bit, ROWS, COLS);


        /*for testing:
        for(i = 0; i < ROWS; i ++){
                for(j = 0; j < COLS; j ++){
                        fprintf(stdout, "%d", bit[i][j]);
                }
                putchar('\n');
        }
        */

        /*转换成字符数组*/
        for(i = 0; i < ROWS; i ++){
                for(j = 0; j < COLS; j ++){
                        ch[i][j] = trans(bit, i, j);
                }
        }
        /* for test
        for(i = 0; i < ROWS; i ++){
                for(j = 0; j < COLS; j ++){
                        printf("%c ", ch[i][j]);
                }
                putchar('\n');
        }
        */

        if(fclose(fp) != 0){
                fprintf(stderr, "file %s close failure.\n", argv[1]);
                exit(4);
        }

        /*将字符串数组写入文件*/
        /*重用fp打开输出文件*/
        if((fp = fopen(argv[2], "w")) == NULL){
                fprintf(stderr, "file %s open failure.\n", argv[2]);
                exit(3);
        }

        for(i = 0; i < ROWS; i ++){
                for(j = 0; j < COLS; j ++){
                        fprintf(fp, "%c",ch[i][j]);
                }
                putc('\n', fp);
        }

        if(fclose(fp) != 0){
                fprintf(stderr, "file %s close failure.\n", argv[2]);
                exit(5);
        }
        return 0;
}

char trans(int arr[][COLS], int row, int col){

        char value;     //for return
        int num;
        num = arr[row][col];

        switch(num){
                
                case 0:
                        value = ' ';
                        break;
                case 1:
                        value = '.';
                        break;
                case 2:
                        value = '\'';
                        break;
                case 3:
                        value = ':';
                        break;
                case 4:
                        value = '~';
                        break;
                case 5:
                        value = '*';
                        break;
                case 6:
                        value = '=';
                        break;
                case 7:
                        value = '@';
                        break;
                case 8:
                        value = '%';
                        break;
                case 9:
                        value = '#';
                        break;
                default:
                        printf("value in (0~9).\n");
                        break;
        }
        return value;
}


void eliminate_distortion(int arr[][COLS], int row, int col){
        /*针对int类型矩阵消除失真分情况讨论*/
        int i;
        int j;
        
        int round;
        
        
        round = arr[0][1] + arr[1][0];
        /*四个顶点处理: upleft/downleft/upright/downright*/
        if(abs(arr[0][0] - arr[0][1]) > 1 
           && abs(arr[0][0] - arr[1][0]) > 1)
                arr[0][0] = ((double)round/2-round/2) >= 0.5? round/2+1: round/2;


        round = arr[row-2][0] + arr[row-1][1];
        if(abs(arr[row-1][0] - arr[row-2][0]) > 1
           && abs(arr[row-1][0] - arr[row-1][1]) > 1)
                arr[row-1][0] = ((double)round/2-round/2) >= 0.5? round/2+1: round/2;

        round = arr[0][col-2] + arr[1][col-1];
        if(abs(arr[0][col-1] - arr[0][col-2]) > 1 
           && abs(arr[0][col-1] - arr[1][col-1]) > 1)
                arr[0][col-1] = ((double)round/2-round/2) >= 0.5? round/2+1: round/2;

        round = arr[0][col-2] + arr[1][col-1];
        if(abs(arr[0][col-1] - arr[0][col-2]) > 1 
           && abs(arr[0][col-1] - arr[1][col-1]) > 1)
                arr[0][col-1] = ((double)round/2-round/2) >= 0.5? round/2+1: round/2;

        /*四个边界处理:left/right/up/down*/

        for(i= 1; i <= row-2; i++){
                round = arr[i-1][0] + arr[i+1][0] + arr[i][1];
                if(abs(arr[i][0]-arr[i-1][0])>1
                   && abs(arr[i][0]-arr[i+1][0])>1 
                   && abs(arr[i][0]-arr[i][1])>1)
                        arr[i][0] = ((double)round/3-round/3) >= 0.5? round/3+1: round/3;
        }

        for(i= 1; i <= row-2; i++){
                round = arr[i-1][col-1] + arr[i+1][col-1] + arr[i][col-2];
                if(abs(arr[i][col-1]-arr[i-1][col-1])>1
                   && abs(arr[i][col-1]-arr[i+1][col-1])>1 
                   && abs(arr[i][col-1]-arr[i][col-2])>1)
                        arr[i][0] = ((double)round/3-round/3) >= 0.5? round/3+1: round/3;
        }

        for(j= 1; j <= col-2; j++){
                round = arr[0][j-1] + arr[0][j+1] + arr[1][j];
                if(abs(arr[0][j]-arr[0][j-1])>1
                   && abs(arr[0][j]-arr[0][j+1])>1 
                   && abs(arr[0][j]-arr[1][j])>1)
                        arr[0][j] = ((double)round/3-round/3) >= 0.5? round/3+1: round/3;
        }

        for(j= 1; j <= col-2; j++){
                round = arr[row-1][j-1] + arr[row-1][j+1] + arr[row-2][j];
                if(abs(arr[row-1][j]-arr[row-1][j-1])>1
                   && abs(arr[row-1][j]-arr[row-1][j+1])>1 
                   && abs(arr[row-1][j]-arr[row-2][j])>1)
                        arr[0][j] = ((double)round/3-round/3) >= 0.5? round/3+1: round/3;
        }

        /*通用*/
        for(i = 1; i <= row-2; i++){
                for(j = 1; j <= col-2; j++){
                        /*arr[i][j]*/
                        round = arr[i-1][j] + arr[i+1][j] + arr[i][j-1] + arr[i][j+1];
                        if(abs(arr[i][j]-arr[i-1][j])>1
                           && abs(arr[i][j]-arr[i+1][j])>1
                           && abs(arr[i][j]-arr[i][j-1])>1
                           && abs(arr[i][j]-arr[i][j+1])>1)
                                arr[i][j] = ((double)round/4-round/4) >= 0.5? round/4+1: round/4;

                }
        }

}
