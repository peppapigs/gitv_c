#include <stdio.h>
#define SEC_MIN 60

int main(void){

        int seconds;
        printf("please enter seconds:\n");

        scanf("%d", &seconds);
        while(seconds >= 0){

            printf("%d seconds is %d minutes and %d seconds\n",
               seconds, seconds/SEC_MIN, seconds%SEC_MIN);
            
            printf("please continue enter seconds\n");
            scanf("%d", &seconds);
        }

        return 0;
}
