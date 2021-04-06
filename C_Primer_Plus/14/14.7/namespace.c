#include <stdio.h>

/*名字空间分类别!*/
/*不能在相同作用域中声明两个
 * 同名标记
 * 或者
 * 同名变量
 * */

int main(void){

        struct namespce{
                int a;
                double b;
        };
        /*
         * 在特定作用域(此处是main函数作用域)中 的
         * 结构标记
         * 联合标记
         * 枚举标记
         * 都共享相同的名称空间-> 所以在同一作用域只能存在(相同名称标记)以上的标记一个
         * union namespce{
                int a;
                double b;
        };
        */

        int namespce;
        /*
         * 在相同作用域中的
         * 变量
         * 标记
         * 的名称可以相同，不会引起冲突
        double namespce;
        */

        return 0;
}
