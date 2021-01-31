#include <stdio.h>

/*
 *  printf函数内容一种在程序结束时才会将缓冲区的内容输出到屏幕上的情况
 */

int main(void)
{
        printf("hello, world!");  //不满足从缓冲区输出到屏幕的条件
        //满足从缓冲区输出到屏幕的条件
        //printf("hello, world!\n"); 
        while(1);
}
