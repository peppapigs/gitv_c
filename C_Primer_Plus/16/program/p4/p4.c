#include <stdio.h>
#include <time.h>

int main(void){

        int i;
        int total = 0;

        double delay;
        clock_t processtime_num1;
        clock_t processtime_num2;
        processtime_num1 = clock();

        /*test*/
        for(i = 1; i < 1000; i ++){

                total += i;
        }

        processtime_num2 = clock();

        delay = ((double)(processtime_num2 - processtime_num1))/CLOCKS_PER_SEC;
        printf("this loop(1000) spended time: %gs\n", delay);

        return 0;
}
