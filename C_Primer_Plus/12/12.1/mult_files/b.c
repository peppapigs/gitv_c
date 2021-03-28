#include <stdio.h>
#include "b.h"                  //去库里面找函数的声明

extern int times;               //引用式声明

void loop(void){

        int i;
        for(i = 0; i < times; i ++){    //用到了其他文件定义的外部变量times,需要引用
                printf("hello world!\n");
        }
}
