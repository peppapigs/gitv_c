#include <stdio.h>

int main(void){

        int even_num = 0;
        int odd_num = 0;

        double even_sum = 0;
        double odd_sum = 0;
        int num;
        printf("please enter some numbers：\n");
        while(scanf("%d", &num) &&  num != 0){

              switch(num % 2){
                      case 0:
                              even_num ++;
                              even_sum += num;
                              break;
                      default:
                              odd_num ++;
                              odd_sum += num;
              }
              
        }

        if(even_num == 0 && odd_num == 0){
                printf("you do not enter number.\n");
        }
        else{
              printf("number of even: %d, average of even: %.2lf.\n",
              even_num, even_sum/even_num);
              printf("number of odd: %d, average of odd: %.2lf.\n",
              odd_num, odd_sum/odd_num);
        }

        return 0;
}
