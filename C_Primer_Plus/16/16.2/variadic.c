#include <stdio.h>
#include <math.h>

/*变参宏
 *
 *省略号：只能代替最后的宏参数
 *
 *__VA_ARGS__ : 可用在替换部分中， 表明 省略号 代表什么
 *
 *宏的一个优点：不用担心变量类型，因为 宏处理的是 字符串，不是 实际的值
 *宏与函数：(相比较而言) 牺牲空间换时间 & 牺牲时间换空间
 */

// 此处PR类函数宏 拓宽了printf函数原有参数形式左侧 的固定形参数目
#define PR(X,...) printf("Message "#X" :" __VA_ARGS__ ) 


int main(void){

        double x = 48;
        double y;

        y = x*x;

        //拓展参数1 参数2                      参数3     参数4
        PR(1,       "x = %g\n",                x);
        PR(2,       "x = %.2f, y = %.4f\n",    x,        y);

        return 0;
}
