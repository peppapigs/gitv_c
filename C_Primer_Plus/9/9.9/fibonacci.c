#include <stdio.h>

long fibonacci1(int);
long fibonacci(int);
long fibonacci2(int);

int main(void){

        int n;
        printf("please enter a integer(q to quit).\n");

        while(scanf("%d", &n) == 1 && n > 0){
               printf("%d: %lu.\n", n, fibonacci1(n)); 
               printf("please enter a integer(q to quit).\n");

        }
        return 0;
}


long fibonacci(int n){
        /*recursion*/
        if(n > 2)      //决定出口
                return fibonacci(n-1) + fibonacci(n-2);  //只关心递推公式:执行细节会让你思维混乱
        else
                return 1;
}

long fibonacci1(int n){

        int n1 = 1, n2 = 1;
        int sum;

        if(n <= 2){
                sum = 1;
        }
        else{
                n = n - 2;
                while(n--){
                        sum = n1 + n2;

                        n1 = n2;
                        n2 = sum;
                }
        }
        return sum;

}

long fibonacci2(int n){
        unsigned long n1, n2, temp;
        int i;
        

        if(n > 2){

                for(n1 = 1, n2 = 1, i = 3; i <= n; i ++){
                        temp = n1 + n2;
                        n1 = n2;
                        n2 = temp;
                }
        }
        else
                return 1;
}
