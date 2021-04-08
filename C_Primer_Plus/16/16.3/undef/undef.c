#include "undef.h" 
//#include <stdio.h>      //可见stdio.h文件的整个定义被ifndef-endif约束


int main(void){

        int a = SIZE;
        printf("a = %d\n", a);

        #undef  SIZE            //取消SIZE 代表的值，在此文件中重定义SIZE
        #define SIZE  15

        a = SIZE;
        printf("undef SIZE later---> a = %d\n", a);
        
        return 0;
}
