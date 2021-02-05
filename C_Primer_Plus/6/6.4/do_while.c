#include <stdio.h>
#define LIM_TIMES 3
int main(void){

        const int secret_code = 13;
        int code_entered;
        int times = 1;

        do{
                printf("please enter the password: ");
                scanf("%d", &code_entered);
        }while(times++ < LIM_TIMES && secret_code != code_entered);

        /*强化*/
        if (13 == code_entered)
                printf("secret right\n");
        else
                printf("secret code is closed\n");

        return 0;

}
