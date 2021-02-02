#include <stdio.h>

int main(void){


        printf("please enter the ending number:\n");

        int start = 1;
        int end;
        int sum = 0;
        scanf("%d", &end);

        if(end < 0){
                printf("bye!\n");
                return 0;
        }

        while(start <= end){
                sum = sum + start;
                start ++;
        }
        printf("sum = %d\n", sum);
        return 0;
}
