#include <stdio.h>
#include <stdlib.h>


int main(void){


        /*malloc & free结合：内存的动态分配存储期*/
        /*使用malloc，程序可以在运行时才 确定数组大小*/

        double * ptd;
        int max;
        int number;
        int i = 0;

        puts("what is the maximum number of type double entries?");

        if( scanf("%d", &max) != 1 ){
                printf("Number not correctly entered --bye!\n");
                exit(EXIT_FAILURE);
        }
        ptd = (double *)malloc(max * sizeof (double));

        if(ptd == NULL){
                puts("Memory Allocation failed. Goodbye!");
                exit(EXIT_FAILURE);     //exit()用于内存分配失败时，结束程序
        }

        /*input*/
        puts("Enter the value (q to quit):");
        while(i < max && scanf("%lf", &ptd[i]) == 1){
                i ++;
        }

        /*output*/
        printf("\nHere are your %d entries:\n", (number=i));

        for(i = 0; i < number; i ++){
                printf("%7.2f", ptd[i]);

                if(i % 7 == 6)
                        putchar('\n');
        }

        if(i % 7 != 0)
                putchar('\n');

        puts("Done!");

        free(ptd);
        return 0;
}
