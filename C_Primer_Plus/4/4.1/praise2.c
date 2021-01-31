#include <stdio.h> 
#include <string.h> 
#define PAISE "may the force be with you!"  //宏：即可在这里更改宏值
/*
 *  sizeof运算符,它以字节为单位给出数据的大小, 返回的是这个变量占据的大小
 *  strlen()函数，以字符为单位给出字符串的长度
 *
 */
int main(void)
{
        printf("please enter your name:\n");
        
        const int MONTH = 12;   //只读 定义常量
        char name[40];
        scanf("%s", name);

        char *p;
        p = name;
        printf("I am %s\n", name);
        printf("%s addr: %p\n", name, name);
        printf("p addr: %p\n", p);
        printf("p memory: %d\n", sizeof(char *));    //8?求出的是指针的空间大小
        printf("p : %s\n", p);
        printf("%s memory: %d\n", name, sizeof(name));
        printf("%s length: %d\n", name, strlen(name));
        printf("PAISE memory %d\n", sizeof(PAISE));
        printf("PAISE has %d letters\n", strlen(PAISE));
  
        return 0;
}
