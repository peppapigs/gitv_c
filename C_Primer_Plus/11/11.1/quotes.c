#include <stdio.h>


int main(void){

        /*字符串常量类似数组，数组名为存储在内存中连续空间的首地址指针
         * 字符串常量也是类似数组名一样的首地址指针，指向字符串存储的内存空间*/
        printf("we, are, space farers:\n");
        printf("%s, %p, %c.\n", "we", "are", *"space farers");
        printf("this:\n");
        printf("%s, %p, %c\n", "this", "this", *"this");


        char ch = 'c';
        printf("ch = %c, &ch = %p.\n", ch, &ch);
        char str[] = "hello!";
        printf("str = %p, str = %s, hello! = %p\n", str, str, "hello!");


        char heart[] = "I love you!";
        char * head = "I love you!";

        printf("heart = %p, head = %p, I love you! = %p.\n", heart, head, "I love you!");
        return 0;
}
