#include <stdio.h>

int main(void){
        int val;
        int val2;
        val = printf("hello\n\n");
        val2 = printf("hello");
        printf("%d\n", val);
        printf("%d\n", val2); //    \0不计入
}
