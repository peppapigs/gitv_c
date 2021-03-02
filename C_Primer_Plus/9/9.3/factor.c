#include <stdio.h>

long rfact(int num);
/*阶乘: 13!超出int范围*/
int main(void){

        unsigned int num;
        printf("please enter a integer to get result:\n");

        while(scanf("%u", &num) == 1){

                if(num >= 0 && num <= 12){

                        long result;
                        result = rfact(num);
                        printf("%u! is %ld.\n", num, result);
                }
                else if(num > 12)
                        printf("result is too big!\n");
                else{
                        while(getchar()!= '\n')
                                continue;
                        printf("error: num should be >=0.\n");
                        continue;
                }

                /*取出一行内其他冗余的输入*/
                while(getchar() != '\n')
                        continue;

        }

        /**/
        printf("bye!\n");
        return 0;
}

long rfact(int num){

        if(num == 0)
                return 1;
        if(num == 1)
                return 1;
        return rfact(num - 1) * num;
}
