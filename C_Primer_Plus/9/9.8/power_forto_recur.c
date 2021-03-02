#include <stdio.h>


float pow(float, int);

int main(void){

        float num;
        int exp;
        
        printf("please enter a number and a exp: ");

        while(2 == scanf("%f%d", &num, &exp)){

            printf("%f 的 %d 次方: %.4f.\n", num, exp, pow(num, exp));
            printf("please continue...\n");
        }

        printf("bye!\n");
        return 0;

}
/*使用递归可以替换调循环部分代码实现*/
float pow(float num, int exp){
        float result = 1;
        
        if(num == 0)
                result = 0;
        else if(exp == 0)                      //出口返回值
                result = 1;
        else if(exp > 0){

                result = num * pow(num, exp-1);//不断更新的递推公式: N * pow(N, exp-1)
                //for(int i = 0; i < exp; i ++)
                //        result *= num;
        }
        else{
                result = 1/pow(num, -exp);
                //for(int i = 0; i < -exp; i ++)
                //        result *= 1/num;
        }
        return result;
}
