#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

        int sets;
        int sides;
        int dice;
        int i;
        int j;
        int subtot = 0;

        srand((unsigned int)time(0));
        printf("Enter the number of sets(q to quit):");

        while(scanf("%d", &sets) == 1 && sets > 0){

                printf("How many sides and how many dice? ");

                while(scanf("%d%d", &sides, &dice) != 2 || (sides <= 0 || dice <= 0))                 {
                        printf("Enter error, enter again!:");
                        while(getchar() != '\n')
                                continue;
                }
                
                printf("Here are 18 sets of %d %d-sided throws.\n", dice, sides);

                for(i = 0; i < sets; i ++){
                        for(j = 0, subtot = 0; j < dice; j ++){     /**/
                                subtot += (rand() % 6) + 1;
                        }
                        printf("%3d", subtot);

                        /*显示处理*/
                        if(i % 6 == 5)
                                putchar('\n');
                }
                
                printf("\nHow many sets? Enter q to stop:");
        }
        return 0;
}
