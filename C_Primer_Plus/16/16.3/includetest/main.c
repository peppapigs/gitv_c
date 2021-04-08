//#include <stdio.h>
#include "main.h"
#include "up.h"

int count = 0;
extern int in;       //5

int main(void){

        while(1){
                up();       //3

                printf("(main.h) in = %d\n", in);   //5
                in = 1;
                printf("(main.c) in = %d, count = %d\n", in, count); //1
                sleep(1);
        }
        return 0;
}
