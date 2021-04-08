#include <stdio.h>
#include <stdarg.h>

double sum(int parmN, ...);

int main(void){

        double s, t;

        s = sum(3,  1.1, 2.2, 3.3);
        t = sum(6,  1.1, 2.2, 3.3, 4.4, 5.5, 6.6);

        printf("s = %.2lf\n", s);
        printf("t = %.2lf\n", t);

        return 0;
}


/*-------------->1.函数声明*/
double sum(int parmN, ...){

        int i;
        double total = 0;
        
        /*------>2.可变参数列表类型*/
        va_list ap;

        /*------>3.va_start()函数宏，将参数列表 拷贝到 va_list类型的变量中*/
        va_start(ap, parmN);

        /*------>4.va_arg()访问参数列表的内容,use loop*/
        for(i = 0; i < parmN; i ++){
                total += va_arg(ap, double);
        }

        /*----->5.va_end宏完成清理工作：释放动态分配用于储存 参数的内存*/
        va_end(ap);


        return total;
}
