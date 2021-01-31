#include <stdio.h>

int main(void)
{
        int in;
        char ch;
        float fl;
        double dou;
        short sh;
        long lo;
        
        printf("int size: %d\n", sizeof(in));
        printf("char size: %d\n", sizeof(ch));
        printf("float size: %d\n", sizeof(fl));
        printf("double size: %d\n", sizeof(dou));
        printf("short size: %d\n", sizeof(sh));
        printf("long size: %d\n", sizeof(lo));
        return 0;
}
