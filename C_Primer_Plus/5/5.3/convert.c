#include <stdio.h>

int main(void){


        char ch;
        int i;
        float fl;

        fl = i = ch = 'C';

        printf("ch = %c, i = %d, fl = %.2f\n", ch, i, fl);

        ch = ch + 1;
        i = fl + 2 * ch;
        fl = 2.0 * ch + i;

        printf("ch: %c, i: %d, fl: %.2f\n", ch, i, fl);

        ch = 1107;
        printf("ch=1107: %c\n", ch);

        ch = 5212205.17;    // 当前编译器的解释策略是打印空
        printf("ch=5212205.17: %c\n",ch);

        ch = 5212205;    //-->5212205-->截取低8位 0010 1101-->0x2d-->'-'
        printf("ch=5212205: %c\n",ch);

        return 0;
}
