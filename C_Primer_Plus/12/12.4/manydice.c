#include <stdio.h>
#include "diceroll.h"
#include <time.h>
#include <stdlib.h>

int main(void){

        int sides;
        int dice;
        int roll;

        int status;

        srand((unsigned int)time(0));   //随机种子
        printf("enter the number of sides per dice(0 to quit)\n");

        while(scanf("%d", &sides) == 1 && sides > 0){

                printf("how many dice?\n");
                //scanf("%d", &dice);     //没有作错误捕获
                if((status = scanf("%d", &dice)) != 1){
                        /*空*/
                        if(status == EOF)
                                break;
                        else{
                                printf("you should have entered an integer.");
                                printf("let us begin again.\n");
                                while(getchar() != '\n')
                                        continue;

                                printf("how many sides per dice(0 to quit)\n");
                                continue;
                        }
                }

                roll = roll_n_dice(dice, sides);
                printf("you have rolled a %d using %d %d-sides dices.\n",
                       roll, dice, sides);

                printf("how many sides per dice(0 to quit)\n");
        }

        printf("the rollem() function was called %d times.\n", roll_count);
        return 0;
}
