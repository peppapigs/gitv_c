#include <stdio.h>

/*
 * 无符号数3000000000和有符号数-129496296在内存中表示方法是一样的
 * (详见第15章)
 */

/*
 *  使用printf()语句时，切记每个要显示的数值都必须对应自己的格式说明符
 *  并且显示值的类型要同说明符相匹配
 *
 */

int main(void)
{
        unsigned int ui = 3000000000;

        short end = 200;
        
        long big = 65537;

        long long verybig = 1234567890798400654;

        printf("ui=%u is not %d\n", ui, ui);

        printf("end=%hd is %d\n", end, end);
        printf("big=%ld is not %hd\n", big, big);   //long big在内存中四个字节空间的存储因为hd短整形的截取只截取到低16位
        printf("verybig=%lld is not %ld\n", verybig, verybig);
}

