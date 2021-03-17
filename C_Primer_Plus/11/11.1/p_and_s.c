#include <stdio.h>

/*pointer & string*/

int main(void){

        char * mesg = "Don't be a fool!";
        char * copy;
        copy = mesg;

        printf("%s.\n", copy);
        /*&mesg(指针变量放在内存中的位置)*/
        /*mesg value(指针变量中存储的数值，此处也是存储的字符串字面量的地址)*/
        printf("mesg = %s, &mesg = %p, mesg value = %p.\n", mesg, &mesg, mesg);
        printf("copy = %s, &copy = %p, copy value = %p.\n", copy, &copy, copy);
        return 0;
}
