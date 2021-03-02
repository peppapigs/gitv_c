#include <stdio.h>
#include <stdbool.h>

int get_int(void);
bool bad_limits(int, int, int, int);
int sum_squares(int, int);

int main(void){

        const int MIN = -10000000;
        const int MAX = 10000000;

        int start;
        int stop;

        int sum;
        printf("this programer computes the sum of square of integer in a range.\n");
        printf("the lower bound should not be less than -10000000.\n");
        printf("the upper bound should not be more than 10000000.\n");

        printf("please enter limits:\n");
        printf("lower limit:");
        start = get_int();

        printf("upper limit:");
        stop = get_int();

        while(start != 0 || stop != 0){

            if( bad_limits(start, stop, MIN, MAX) )
                    printf("please try again.\n");
            else{
                    sum = sum_squares(start, stop);
                    printf("the sum of the squares of the integers from %d to %d: %d\
                                    ", start, stop, sum);
            }

            printf("enter the limits \(enter 0 for both limits to quit\):\n");

            printf("lower limit:");
            start = get_int();

            printf("upper limit:");
            stop = get_int();
        }
        return 0;
}

int get_int(void){
        
        int input;
        char ch;

        while(scanf("%d", &input) != 1){
                /*处理整数输入错误后丢弃该输入行的所有剩余内容*/
                while((ch = getchar()) != '\n'){
                        putchar(ch);
                }

                printf(" is not an integer.\nplease enter an integer value, such as 25, -5, or 10: ");
        }

        return input;
}

bool bad_limits(int begin, int end, int low, int high){

        bool not_good = false; //默认区间限定正确

        /*三种限定出错可能性*/
        if(begin > end){
                printf("%d is not smaller than %d.\n", begin, end);
                not_good = true;
        }
        if(begin < low || end < low){
                printf("values must be %d or greater.\n", low);
                not_good = true;
        }
        if(begin > high || end > high){
                printf("values must be %d or smaller.\n", high);
                not_good = true;
        }

        return not_good;
}

int sum_squares(int a, int b){
        
        int total = 0;

        for(int i = a; i <= b; i ++)
                total += i*i;

        return total;
}
