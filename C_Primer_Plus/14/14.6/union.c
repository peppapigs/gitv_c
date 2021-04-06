#include <stdio.h>

union hold{
        int a;
        int b;
        int c;
};

int main(void){

        union hold value;
        value.a = 100;              //初始化后,同一时间仅仅能存在一个值，即便再大空间

        printf("value.b: %d\n", value.b);    //3个成员变量类型指向同一个内存空间
        printf("value.c: %d\n", value.c);

        /*总是在操作这一块共享内存*/
        value.b = 200;
        printf("value.a: %d\n", value.a);
        return 0;
}
