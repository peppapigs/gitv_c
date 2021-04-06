#include <stdio.h>

enum color{red, orange =10, yellow, green, blue};

int main(void){

        /*枚举不用变量声明阶段，就可用其成员变量了
         *其成员变量类似宏，枚举成员 就是一个有名称的常量
         * */
        printf("red= %d, yellow=%d\n", red, yellow);
        return 0;
}
