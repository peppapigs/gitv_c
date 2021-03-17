#include <stdio.h>
#define MAX 81

int main(void){

        char name[MAX];
        char * ptr;
        printf("please enter your name:\n");
        ptr = gets(name);
        printf("%s? ah! %s\n", name, ptr);
        return 0;
}
