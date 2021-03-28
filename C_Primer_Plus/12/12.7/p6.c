#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define LEN 1000
#define BASE 10

/*测试特定随机数生成器随机性的一个方法*/

int main(void){

        int data_cnt[SIZE] = {0};
        int i;
        int index;

        for(int seed = 1; seed <= 10; seed ++){

                srand(seed);

                for(i = 0; i < LEN; i ++){
                        index = (rand() % BASE);
                        /*生成随机数，并通过下标记录随机数的出现次数*/
                        data_cnt[index] ++;
                }
                
                printf("Random data created,let's stata it.\n");
                /*打印特定种子中1～10出现的次数*/
                for(i = 0; i < SIZE; i ++){
                        printf("The index %d created %d times.\n", i+1, data_cnt[i]);
                }

                printf("\n");

        }

        return 0;
}
