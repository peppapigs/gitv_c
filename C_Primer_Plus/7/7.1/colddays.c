#include <stdio.h>
#define ZERO 0

int main(void){
        int coldays = 0;
        double temp; 
        int day = 0;

        printf("please enter some temperature: \n");
        while(scanf("%lf", &temp)){

                    day ++;
                    if(temp < ZERO){
                            coldays ++;
                    }
        }

        /*错误预警*/
        if(day == 0)
                printf("no data entered\n");
        
        if(day != 0)
                printf("total day: %d, the colday occupys %.2lf%%\n",
                        day, ((double)coldays/(double)day) * 100);
        return 0;
}
