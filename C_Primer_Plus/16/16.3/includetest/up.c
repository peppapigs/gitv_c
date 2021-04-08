#include "up.h"     //printf need stdio.h, it in up.h
#include "main.h"   //for use count, in

extern int in;


void up(void){

        count ++;   //每调用一次自增1
        in = 3;
        printf("(up.c) in = %d\n", in);
}
