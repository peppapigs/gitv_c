#include <stdio.h>

/*
 *  如果需要确实使用重定义常量， 使用const关键字 & 作用域规则 更好
 */

int main(void){
        
        int i;

        const int a = 10;
        printf("a = %d\n", a);

        //const int a = 20;

        for(i = 1; i < 5; i ++){
                /*作用域{}*/
                const int a = 20;
                printf("a = %d\n", a);
        }
        return 0;
}
