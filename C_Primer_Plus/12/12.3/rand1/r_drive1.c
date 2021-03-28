#include <stdio.h>

extern unsigned int rand1(void);
extern void srand1(unsigned int seed);

int main(void){

        int count;
        unsigned int seed;

        printf("please enter your choice for seed:\n");

        while(scanf("%hu", &seed) == 1){
        
                srand1(seed);
            
                for(count = 0; count < 5; count ++)
                        printf("%hu ", rand1());

                printf("\nplease enter your choice for seed:\n");
        }
        return 0;
}
