#include <stdio.h>
#include <math.h>

int main(void){


        const double ANWSER = 3.14159;
        double response;

        printf("please enter you anwser:\n");

        
        
        if(scanf("%lf", &response) == 0){
                printf("少侠，你不讲武德，劝你耗子尾汁\n");
                return 0;
        }
        while( fabs(response - ANWSER) > 0.00001 ){
                printf("Try again:");
                scanf("%lf", &response);
        }

        printf("your response %lf is excellent!\n", response);
        return 0;
}
