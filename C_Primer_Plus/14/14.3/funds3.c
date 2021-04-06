#include <stdio.h>

#define FUNDLEN     50

/*功能:将客户的银行账户 添加到 他的存储savings和贷款loan账户中*/


struct funds{
        char bank[FUNDLEN];
        double bankfund;
        char save[FUNDLEN];
        double savefund;
};      //结构布局


double sum(struct funds);       

int main(void){

        const struct funds stan = {

                "Garlic-Melon Bank",
                4032.27,
                "Lucky's Savings and Loan",
                8543.94
        };
        printf("Stan has a total of $%.2lf\n",sum(stan));//传递结构体本身(副本结构变量)
        return 0;
}

double sum(struct funds person){
        return person.bankfund + person.savefund;
}
