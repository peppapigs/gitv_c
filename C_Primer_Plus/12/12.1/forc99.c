#include <stdio.h>


int main(void){

        int n = 10;
        printf("initally, n = %d, at %p\n", n, &n);

        for(int n = 1; n < 3; n ++)
                printf("loop 1 : n= %d at %p.\n", n, &n);

        printf("after loop 1, n = %d at %p.\n", n, &n);

        for(int n = 1; n < 3; n ++){
                printf("loop 2 :index n= %d at %p.\n", n, &n); /*就近上*/

                int n = 6;
                printf("loop 2 : n= %d at %p.\n", n, &n); /*就近*/
                n ++;
        }

        printf("after loop 2, n = %d at %p.\n", n, &n);

        return 0;
}
