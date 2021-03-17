#include <stdio.h>
#define MAX 81

/*fget(): 不足是将输入的回车也一并接收了
 * 优点: 检测输入的字符数是否超过预定字符数，如果超过就停止读取，或者读取到回车结束*/
/*fget(): == file get string*/
int main(void){

        char name[MAX];

        char * ptr;
        printf("please enter your name!\n");
        ptr = fgets(name, MAX, stdin);
        printf("%s nice to meet you! %s.\n", name, ptr);
        return 0;
}
