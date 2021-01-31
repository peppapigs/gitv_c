#include <stdio.h>

/*
 *  字符在内存中实际上是以整形数存储
 *
 */

int main(void)
{
        char ch;
        printf("please enter a character:\n");

        scanf("%c", &ch);
        
        printf("code: %c, ascii: %d, addr: %p\n", ch, ch, &ch);


        return 0;
}
