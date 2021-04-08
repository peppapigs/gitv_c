#include <stdio.h>
#define TWO       2
#define PX      printf("X is %d\n", x)     //C编译器知道C语法规则
#define FOUR    TWO*TWO
#define FMT     "X is %d\n"
#define OW      "this string is too long : 2021/4/6/12:02 the transportor of the food booking had a accident! eating a meal seems difficuit!"


int main(void){

        int x = TWO;
        PX;
        
        x = FOUR;               //预处理阶段：x = FOUR -> x=TWO*TWO->x=2*2
        printf(FMT, x);
        printf("%s\n", OW);
        
        /*"不是宏"*/
        printf("TWO: OW\n");

        return 0;
}
