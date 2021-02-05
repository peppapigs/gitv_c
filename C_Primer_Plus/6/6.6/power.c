#include <stdio.h>


float pow(float, int);

int main(void){

        float num;
        int exp;
        
        printf("please enter a number and a exp: ");

        while(2 == scanf("%f%d", &num, &exp)){

            printf("%f 的 %d 次方: %.2f.\n", num, exp, pow(num, exp));
        }

        printf("bye!\n");
        return 0;

}

float pow(float num, int exp){

        float result = 1;
        for(int i = 0; i < exp; i ++){
                result *= num;
        }
        return result;
}
