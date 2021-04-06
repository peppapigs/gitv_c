#include <stdio.h>

#define FUNDLEN     50
#define N           2

/*功能:将客户的银行账户 添加到 他的存储savings和贷款loan账户中*/


struct funds{
        char bank[FUNDLEN];
        double bankfund;
        char save[FUNDLEN];
        double savefund;
};      //结构布局


double sum(const struct funds person[], int n);       

int main(void){

        const struct funds jones[N] = {

                {
                        "Garlic-Melon Bank",
                        4032.27,
                        "Lucky's Savings and Loan",
                        8543.94
                },
                {
                        "Honest Jack's Bank",
                        3620.88,
                        "Party Time Savings",
                        3802.91
                }
        };
        printf("jones have a total of $%.2lf\n",sum(jones, N));//传递结构体本身(副本结构变量)
        return 0;
}

double sum(const struct funds person[], int n){

        double total = 0;
        int i;

        for(i = 0; i < n; i ++){
                total += ((person+i)->bankfund + (person+i)->savefund);
        }
        return total;
}
