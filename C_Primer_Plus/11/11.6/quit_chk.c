#include <stdio.h>
#include <string.h>
#define SIZE 80
#define LIM 10
#define STOP "quit"

/*使用strcmp()函数 检查程序 是否要停止读取输入,两字符串参数比较到末尾结束*/

int main(void){

        char input[LIM][SIZE];

        int cnt = 0;  /*counting number of string*/

        while(cnt < LIM && gets(input[cnt]) != NULL && strcmp(input[cnt], STOP)){
                cnt ++;
        }

        printf("total number of string: %d.\n", cnt);
        return 0;
}
