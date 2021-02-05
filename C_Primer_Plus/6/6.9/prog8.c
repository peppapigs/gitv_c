#include <stdio.h>
/*收敛判定*/

void func(int);

int main(void){

        printf("请输入项数：");

        int num;
        while(scanf("%d", &num)){

                func(num);
        }

        return 0;
}

void func(int num){
        double sum1 = 0;
        double sum2 = 0;

        int index;

        for(index = 1; index <= num; index ++){
                sum1 += 1.0/index;
                sum2 += ((index % 2) != 0 ? 1.0: -1.0 ) * 1.0/index;
        }

        printf("1+...+1.0/%.1f: %lf\n", (double)num, sum1);
        printf("1-1.0/2.0...1.0/%.1f: %lf\n", (double)num, sum2);

        printf("To Be Continue:");
        return ;
}
