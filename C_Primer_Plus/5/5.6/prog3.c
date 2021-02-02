#include <stdio.h>
#define W_D 7
int main(void){

        printf("please enter days:\n");

        int days;
        scanf("%d", &days);

        while(days > 0){
                printf("%d days is %d weeks and %d days\n",
                        days, days/W_D, days%W_D);
                scanf("%d", &days);
        }
        return 0;
}
