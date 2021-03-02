#include <stdio.h>

/*判断素数（质数）,若不是打印出约数*/

int main(void){

        int num;
        printf("please enter a num:");
        
        int index;
        while(scanf("%d", &num)){
                if(num == 1){
                        printf("1 不是素数\n");
                        printf("please continue enter:");
                        continue;
                }
                else{

                        /*arr[20]必须每次循环都初始化*/ 
                        int arr[20] = {0};
                        arr[0] = num;
                        int rear = 0;

                        for(index = 2; index < num; index++){
                                if(num % index == 0){
                                        arr[++rear] = index; 
                                }
                        }
                        if(arr[1] == 0){
                                printf("%d 是素数.\n", num);
                                printf("please continue enter:");
                        }
                        else{
                                printf("%d 的约数：", num);
                                for (int n = 1; n <= rear; n ++){
                                        printf("%d ", arr[n]);
                                }

                                printf("\n");
                                printf("please continue enter:");
                        }
                }

        }

        printf("bye!\n");

        return 0;

}
