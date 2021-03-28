#include <stdio.h>      //<>:去库里找
#include "b.h"          //"":去当前文件夹去找定义的函数 想用该函数仅需包含头文件

int times = 10;  //具有外部链接的静态变量的定义式声明

int main(void){

        loop();

        return 0;
}
