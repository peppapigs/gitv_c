#include <stdio.h>

/*
 *  自增、自减运算符 在一条执行语句“;”未执行前就赋值才可能会导致，先
 *  自增还是后自增的差距
 */
int main(void){


        int a = 1;
        int b = 1;
        int aplus, bplus;

        aplus = a++;
        bplus = ++b;

        printf("aplus: %d\n", aplus);
        printf("bplus: %d\n", bplus);
        printf("a: %d\n", a);
        printf("b: %d\n", b);
        return 0;
}
