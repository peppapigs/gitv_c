#include <stdio.h>
#define SIZE    40

struct name{
        char first[SIZE];
        char last[SIZE];
};

struct friend{
        struct name handle;
        char favfood[SIZE];
        char job[SIZE];
        float income;
};

int main(void){

        /*结构变量定义以及初始化*/
        struct friend fellow[2] = {
                {
                        {"Andy","Geogre"},      //初始化类型要对应
                        "mogle",
                        "java development engineer",
                        .income = 5000.00  
                },
                {
                        {"Sandy","Lee"},      
                        "milk",
                        "php development engineer",
                        .income = 4000.00 
                }
        };

        struct friend *him;
        him = fellow;

        printf("address #1: %p, #2: %p\n", &fellow[0], &fellow[1]);
        printf("address handle: %p\n", &fellow[0].handle);
        printf("address first: %p\n", fellow[0].handle.first);
        printf("pointer #1: %p, #2: %p\n", him, him + 1);
        
        //'.' *him == fellow[0]  .'. him结构体指针有两种方式访问结构体内成员变量
        //其中， him->成员变量：更常用
        printf("him->income: %.2lf, (*him).income: %.2lf\n", him->income, (*him).income);
        //并不能这么取值一个结构体，而应取值成员变量,
        //虽然此处取值了结构体的第一个成员变量
        //printf("%s==%s\n", him, (*him)); 

        printf("himiend name: %s %s, income:%.2lf\n",
               (him+1)->handle.first, (him+1)->handle.last, (him+1)->income);
        return 0;
}
