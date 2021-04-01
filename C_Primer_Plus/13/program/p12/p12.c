#include <stdio.h>
#include <stdlib.h>

#define ROWS    20
#define COLS    30


char trans(int arr[][COLS], int row, int col);

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
                        fprintf(fp, "%c ",ch[i][j]);
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
