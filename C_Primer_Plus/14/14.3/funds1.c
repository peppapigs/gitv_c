#include <stdio.h>

#define FUNDLEN     50

/*功能:将客户的银行账户 添加到 他的存储savings和贷款loan账户中*/

//double sum(double x, double y); //没有提示错误原因：编译器在这条并未用到结构体变量

struct funds{
        char bank[FUNDLEN];
        double bankfund;
        char save[FUNDLEN];
        double savefund;
};      //结构布局

double sum(double, double);     //位置更安全

int main(void){

        struct funds stan = {

                "Garlic-Melon Bank",
                4032.27,
                "Lucky's Savings and Loan",
                8543.94
        };
        printf("Stan has a total of $%.2lf\n", sum(stan.bankfund, stan.savefund));
        return 0;
}

double sum(double x, double y){
        return x + y;
}
