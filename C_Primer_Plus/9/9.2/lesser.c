#include <stdio.h>

int imin(int, int);

int main(void){

        int evil1, evil2;

        printf("please enter a pair of integers(q to quit):\n");

        while(scanf("%d%d", &evil1, &evil2) == 2){

                printf("the lesser of number between %d and %d is %d.\n",
                       evil1, evil2, imin(evil1, evil2));
                /*for next */
                printf("please enter a pair of integers(q to quit):\n");

        }

        printf("bye!\n");
        return 0;
}

int imin(int a, int b){

        int min;
        if(a < b)
                min = a;
        else
                min = b;                

        return min;
}
