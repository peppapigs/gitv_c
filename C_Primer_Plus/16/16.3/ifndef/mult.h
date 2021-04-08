#ifndef MULT_H_

    #define MULT_H_
    #include <stdio.h>
    #include "text.h"   //mult.c is going to use struct name that declared in text.h


    void func(void);

#endif

//良好习惯：只要是头文件，就尽量将头文件定义通过ifndef 文件名宏 endif所约束
