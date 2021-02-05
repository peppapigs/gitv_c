#include <stdio.h>

int main(void){


        double money = 100;
        int year = 0;

        /*循环未知次数*/
        while(money > 0){
                year ++;
                money += 100*0.08;
                money -= 10;
                printf("%d 年的余额%.3lf\n", year, money);
        }
        printf("%d years later is over\n", year);
        return 0;

}
