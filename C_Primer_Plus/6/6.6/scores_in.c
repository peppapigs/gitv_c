#include <stdio.h>
#define TIMES 10

int main(void){

        int sum = 0;
        float avg = 0;

        /*限定输入的次数*/
        int score[TIMES];
        printf("please enter %d scores:\n", TIMES);

        for(int n = 0; n < TIMES; n ++){
            printf("please enter NO.%d score: ", n + 1);
            scanf("%d", &score[n]);
        }

        /*展示数组*/
        printf("score list:\n");
        for(int n = 0; n < TIMES; n ++){
                printf("%-3d", score[n]);
                sum = sum + score[n];
        }

        avg = (float)sum/TIMES;
        printf("\n"); 
        printf("score_sum: %d, score_avg: %.2f.\n", sum, avg);
        return 0;
}
