#include <stdio.h>
#define DUNBAR_NUM 150

int main(void){

        int friends = 5;
        int weeks = 0;

        
        while(friends <= DUNBAR_NUM){
                weeks ++;
                friends -= weeks;
                friends = 2 * friends;

                printf("%d weeks has %d friends\n", weeks, friends);
        }

        return 0;
}
