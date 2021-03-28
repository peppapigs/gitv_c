#include <stdlib.h>
#include <stdio.h>
#include "diceroll.h"

int roll_count = 0;             //全局变量和static静态的变量在编译时就已经分配号空间

/*掷一次骰子产生的随机数(1~6)*/
static int rollem(int sides){

        int roll;
        roll = (rand() % sides) + 1;
        ++roll_count;

        return roll;
}

/*total value*/
int roll_n_dice(int dice, int sides){

        int total = 0;
        int d;

        if(sides < 2){
                printf("Need at least 2 sides");
                return -2;
        }
        if(dice < 1){
                printf("Need at least 1 dice");
                return -1;
        }

        /**/
        for(d = 0; d < dice; d ++)
                total += rollem(sides);

        return total;

}
