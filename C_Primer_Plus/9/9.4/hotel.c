#include <stdio.h>
/*因为在功能函数文件会用到头文件中定义的宏（或函数）*/
#include "hotel.h"  //"":去当前工程目录找hotel.h文件

/*function of ..*/

int menu(void){

        printf("%s\n", STARS);
        printf("enter the number of desired hotel:\n");
        printf("1) youngster hotel      2) zero hotel\n");
        printf("3) season hotel         4) peace hotel\n");
        printf("5) QUIT\n");
        printf("%s\n", STARS);

        int status;
        int code;
        
        /*input error*/
        while((status = scanf("%d", &code)) != 1 || (code <=0 || code >5)){

                if(status != 1)
                        scanf("%*s");   //输入为字符串时跨国输入
                printf("input code error: please enter a integer between 1 and 5.\n");

                /*处理冗余行输入*/
                while(getchar() != '\n')
                        continue;
        }

        return code;
}

int getnights(void){

        int nights;
        int status;
        printf("how many night are needed?\n");

        while((status = scanf("%d", &nights)) != 1 || (nights <= 0)){
                
                if(status != 1)
                        scanf("%*s");
                printf("input error:nights should be > 0.\n");
        }

        return nights;
}

void showprice(double hotel_rate, int nights){

        int n;
        double total = 0.0;
        double factor = 1.0;

        /*factor *= DISCOUNT 除了第一次循环不打折，其余每次汇率都照上一次打折*/
        for(n = 1; n <= nights; n ++, factor *= DISCOUNT){
                total += hotel_rate * factor;
        }

        printf("the total cost is %.2f.\n", total);

}
