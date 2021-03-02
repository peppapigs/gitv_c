#include <stdio.h>

void interchange(int *, int *);
int main(void){

        int x = 5, y = 10;

        printf("originally x=%d, y=%d.\n", x, y);
        interchange(&x, &y);
        printf("now x=%d, y=%d.\n", x, y);
        return 0;
}


void interchange(int * u, int * v){
        int temp;

        temp = *u;
        *u = *v;
        *v = temp;
}
