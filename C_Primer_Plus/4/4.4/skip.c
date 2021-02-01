#include <stdio.h>
/*
 *  scanf
 */

int main(void){
        int n;

        printf("please enter three integers:\n");
        scanf("%*d %*d %d", &n);

        printf("the last integer was %d\n", n);

        return 0;
}
