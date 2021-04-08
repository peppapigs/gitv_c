#include <stdio.h>
#include <unistd.h>  //sleep

/*
 * 头文件中定义的内部链接的静态变量
 * static 意味着 每个包含该头文件的文件获得的都是一份static int in的副本，
 * 在包含该头文件的文件操作in操作的只是自己文件中该静态变量的副本
 */
static int in = 5;
extern int count;

