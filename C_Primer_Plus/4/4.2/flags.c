#include <stdio.h>


int main(void)
{
        printf("%x %#x %X\n", 31, 31, 31);
        printf("*%d* *% d* *% d*\n", 42, 42, -42);
        printf("*%d* *%5.3d* *%5.3f* *%05d* *%05.3d*\n", 6, 6, (double)6, 6, 6);
        return 0;
}
