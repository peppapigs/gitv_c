#include <stdio.h>
#define SIZE 4

int main(void){

        short arr[SIZE];
        short * pti;
        short index;
        
        double bills[SIZE];
        double * ptf;

        pti = arr;
        ptf = bills;

        for(index = 0; index < SIZE; index ++){
                /*指针加1：地址增加一个存储单元*/
                printf("pointer + %d = %p, %p\n", index, pti + index, ptf + index);
        }
        return 0;
}
