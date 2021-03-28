#include "const.h"
#include <stdio.h>          //虽然该.c文件是函数模块，但是用到了printf

void loop(void){
        int i;
        for(i = 0; i < 10; i ++)
                printf("PI = %f\n", PI);
}
