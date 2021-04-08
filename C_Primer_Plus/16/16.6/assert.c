#include <stdio.h>

#define NDEBUG          //该宏定义写在 包含assert.h的位置前面-->关闭assert()宏机制
#include <assert.h>

/*
 *  可见NDEBUG先行宏声明后，#include <assert.h>中，
 *
 *  #ifdef NDEBUG
 *      #undef assert(表达式)
 *  #endif
 */
#define ASSER_T(X)      //此类函数宏 没有替换体 依旧调用无错误提示

int main(void){

        int num ;
        printf("please enter a integer(>0):\n");
        while(1){
                scanf("%d", &num);
                ASSER_T(X);

                //调试法1: assert：自动标识文件&问题所在行号
                //调试法2: #undef-#endif
                assert(num > 0);    //表达式为真继续执行，为假结束程序输出相应信息

                printf("num = %d\n", num);
                printf("please enter a integer(>0):\n");
        }


        return 0;
}
