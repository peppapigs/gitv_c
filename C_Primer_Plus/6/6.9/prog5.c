#include <stdio.h>

void func(double, double);

int main(void){

        double num1;
        double num2;

        printf("please enter two num: ");
        
        while(2 == scanf("%lf%lf", &num1, &num2)){
                func(num1, num2);
        }
        return 0;
}

void func(double num1, double num2){
        
                printf("result: %.3lf\n", (num2-num1)/(num2*num1));
                printf("please continue enter two num: ");
                
                return ;
}
