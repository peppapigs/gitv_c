#include <stdio.h>

#define MAXTITL     31
#define MAXAUTL     41

/*此处：具有文件连接作用域的全局的结构体*/
/*
 * 结构声明 & 结构变量的定义--> 【分离的情况】:此时结构标记book不可省略
 *
 * 结构：第一层含义之 ‘结构布局’
 *
 * 结构布局 告诉编译器如何表示数据，但并为让编译器为数据分配空间 
 */

struct book {
        char title[MAXTITL];
        char author[MAXAUTL];
        float value;

};      //; 表示结构布局 定义结束

int main(void){

        /*使用book模板为结构变量分配空间*/
        /*这些内存空间都与一个名称library变量结合在一起*/

        struct book library;    //结构：第二层含义之（创建） ‘结构变量’

        /*访问结构体成员变量*/
        puts("please enter the book title:");
        gets(library.title);
        puts("now enter the auther:");
        gets(library.author);
        puts("enter the price:");
        scanf("%f", &library.value);
        printf("%s by %s: %.2lf.\n", library.title, library.author, library.value);
        puts("Done!");
        return 0;
}
