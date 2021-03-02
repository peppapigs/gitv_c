#include <stdio.h>
#define RATE1 0.13230
#define RATE2 0.15040
#define RATE3 0.30025
#define RATE4 0.34025
#define BREAK1 360.0
#define BREAK2 468.0 
#define BREAK3 720.0 
/*宏表达式：尽量带括号，要不计算会导致因宏替换后运算法则改变宏计算方式:*/
#define BASE1 (RATE1 * BREAK1)
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
#define BASE3 (BASE1 + BASE2 + (RATE3 * (BREAK3 - BREAK2)))

int main(void){

        double kwh;
        double bill;

        printf("please enter kwh used: ");

        while( scanf("%lf", &kwh) ){

                if(kwh >= 0){

                        if(kwh <= BREAK1)
                                bill = kwh * RATE1;
                        else if(kwh <= BREAK2)
                                bill = BASE1 + (RATE2 * (kwh - BREAK1));
                        else if(kwh <= BREAK3)
                                bill = BASE2 + (RATE3 * (kwh - BREAK2));
                        else
                                bill = BASE3 + (RATE4 * (kwh - BREAK3));
                }
                else{
                    printf("input must be +number\n");
                    return 0;
                }

                printf("%lf kwh bill is %.3lf.\n", kwh, bill);


        }
        return 0;
}
