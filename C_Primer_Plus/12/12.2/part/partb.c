#include <stdio.h>

extern int count;
static int total = 0;

void accumulate(int k){

        static int subtotal = 0;  //程序在载入内存时，已经执行完毕, 并不是accumulate函数的一部分，只是告诉编译器只有该函数才能看到该变量而已,这条声明并非是在运行时 执行

        if(k <= 0){
                printf("loop cycle: %d\n", count);
                printf("subtotal: %d; total: %d\n", subtotal, total);
                subtotal = 0;   //如果不置为0，则因该函数被包含在parta.c中而导致subtotal虽然作用域是块作用域但是由于静态的原因而subtotal的生存周期是整个执行过程
        }
        else{
                subtotal += k;
                total += k;
        }
}
