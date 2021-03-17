#include <stdio.h>

/*想要在运行命令时，传递一些参数，例如：./a.out 100 200, main(not void)*/
/*参数个数， string指针数组(参数形式)*/
/*参数argc个数是包括可执行程序命令名的!*/

/*从这种角度看，main函数也是一个定义函数，由操作系统驱动（测试）程序调用*/
int main(int argc, char *argv[]){

        /*char *argv[] == char **argv,但都能表示指针的指针，前者表示为一系列字符串更清晰*/
        printf("the command line has %d arguments:\n", argc);
        printf("actualy we want %d arguments:\n", argc -1);

        int count;
        for(count = 1; count < argc; count ++){
                printf("the %dth argument is %s.\n", count, argv[count]);
        }
        return 0;
}
