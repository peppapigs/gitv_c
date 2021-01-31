#include <stdio.h>


int main(void)
{
        printf("please enter your name:\n");

        char name[40];

       // scanf("%s",name );  //scanf遇到空白字符停止读取
        gets(name);

        printf("Im %s.\n", name);
        return 0;
}
