#include <stdio.h>

void sqrt_sum(int, int);
int main(void){

        printf("please enter start limit and end limit: ");

        int st_limit;
        int end_limit;

        
        while(2 == scanf("%d%d", &st_limit, &end_limit) && st_limit < end_limit){

                sqrt_sum(st_limit, end_limit);
        }
        return 0;

}

void sqrt_sum(int st_limit, int end_limit){

        int index;
        int sum = 0;
        for(index = st_limit; index <= end_limit; index ++){

                sum = sum + index*index; 
        }
        
        printf("sqrt_sum: %d\n", sum);
        printf("please continue enter:\n");
        return ;
}
