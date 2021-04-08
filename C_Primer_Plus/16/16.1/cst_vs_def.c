#include <stdio.h>
#define LIMIT   20                    //LIMIT: 宏，一个符号常量 标记

int main(void){

        const int LIM = 50;             //LIM: 是一变量，只是变量内的值无法更改
        
        static int data1[LIMIT];
        //static int data2[LIM];      //storage size of 'data2' is'nt constant编译无效


        const int LIM1 = 2 * LIMIT; 
        const int LIM2 = 2 * LIM;   //不一定，看编译器环境，ubuntu 20有效

        return 0;
}

/**
 *  局部变量: 在程序执行时，才会在内存中分配变量，进而才能在内存中存数值(赋值)
 *  
 *  static: 决定了该数组要在程序执行前(编译时)就已经 完成分配好足够空间和初始化0.
 *          所以static声明的数组，不可能等到程序执行LIM分配空间赋值一个不可更改值之后
 *          ，才去创建，时间顺序决定LIM不可以作为数组的(常数)容量
 *  
 *  #define: 在源代码编译完成前最初就要 预先执行的指令，使得 LIMIT 已经成为标记为20
 *           的标记常量
 *
 **/
