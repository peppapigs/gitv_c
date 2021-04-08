#include <stdio.h>

// "#宏形参"  :字符串中包含宏参数若要实现替换 -->字符串化

#define PSQR(X)    printf("The square of "#X" is %d\n", ((X)*(X)))

int main(void){

        int y = 5;
        PSQR(y);

        PSQR(2+4);
        return 0;
}
