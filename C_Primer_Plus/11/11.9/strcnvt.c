#include <stdio.h>
#include <stdlib.h>

#define LIM 20

/*灵魂之问：为什么不用scanf("%d")*/

int main(void){
        char number[LIM];
        char * end;                            /*指针*/
        long value;

        puts("enter a number(empty line to quit):");
        while(gets(number) != NULL && number[0] != '\0'){
                /*strtol(带转换字符串，输出性质指针（字符串）的尾地址, 进制)*/

                value = strtol(number, &end, 10);     //&end :指针的地址
                printf("value: %ld, number: %s, stopped at %s(%d)\n",
                                value, number, end, *end);
                value = strtol(number, &end, 16);     //&end :指针的地址
                printf("value: %#x, number: %s, stopped at %s(%d)\n",
                                value, number, end, *end);
                
                puts("please enter next number:");
        }
        return 0;
}
