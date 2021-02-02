#include <stdio.h>


int main(void){


        printf("please enter a initial num:\n");

        int num;
        scanf("%d", &num);

        int limit = num + 10;
        while(num <= limit){
                printf("%5d", num++);
        }

        printf("\n");
        return 0;
}
