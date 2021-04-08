#include <stdio.h>

/*
 * 使用#运算符： 组合字符串
 *
 * 使用##运算符：把记号组合成一个新的标识符
 */

#define XNAME(n)        x##n
#define PRINT_XN(n)     printf("x"#n" = %d\n", x##n)

int main(void){

        int XNAME(1) = 14;      //生成变量名x1 并赋值14
        int XNAME(2) = 20;      //生成变量名x2 并赋值20
        //printf("x1 = %d\n", x1);
        PRINT_XN(1);
        PRINT_XN(2);
        return 0;
}
