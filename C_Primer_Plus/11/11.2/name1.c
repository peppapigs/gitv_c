#include <stdio.h>
#define MAX 81

/*gets(): 适合从键盘读取文本，更简洁*/
int main(void){

        char name[MAX];
        printf("please enter your name:\n");
        gets(name);
        printf("nice to meet you! %s\n", name);
        return 0;
}
