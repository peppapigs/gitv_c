#include <stdio.h>
#include <stdbool.h>


int main(void){

        printf("please enter a number or \(enter -1 or q for quit\): ");

        int num;
        while(scanf("%d", &num) && num > 0){

                /*额外判断1*/
                if(num == 1){
                        printf("%d 不是素数\n", num);
                        printf("please enter another number:");
                        continue;
                }

                for(int n = 2; n <= num; n ++){

                        bool flag = true;     
                        for(int index = 2; index < n; index ++){
                                if(n % index == 0){
                                        flag = false;
                                }
                        }
                        if(flag == true)
                                printf("%d 是素数.\n", n);

                }
                
                printf("please enter another number:");
        }
        return 0;
}
