#include <stdio.h>
#define SINGLE_IN 0.1
#define DOUBLE_IN 0.05
/*
 *
 *  初始资金：输入
 *  Daphne: 每年10%原始资金单利
 *  Deirdre: 每年5%当前结余资金复利
 *
 *  结论：
 */
int main(void){

        printf("please enter init_money: ");
        double INIT_MONEY;

        scanf("%lf", &INIT_MONEY);
        double daphne = INIT_MONEY;
        double deirdre = INIT_MONEY;

        int year = 0;
        while(deirdre <= daphne){

                year ++;
                daphne = daphne + INIT_MONEY*SINGLE_IN; //单利
                deirdre += deirdre*DOUBLE_IN; //复利
                printf("%d-> daphne: %lf deirdre: %lf\n", year, daphne, deirdre);
        }

        printf("复利5%%的deirdre超过单利10%%的daphne所用：%d.\n", year);

        printf("deirdre: %lf, daphne: %lf\n", deirdre, daphne);

        return 0;
}
