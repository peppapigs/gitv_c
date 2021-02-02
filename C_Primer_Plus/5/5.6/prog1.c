#include <stdio.h>
#define M_H 60
int main(void){


        int min;
        printf("please enter minuts:\n");
        scanf("%d", &min);
        while(min > 0){
                
            printf("%d minuts is %d hours and %d minutes.\n",
              min, min/M_H, min%M_H);
            scanf("%d", &min);
        }
        printf("bye!\n");
        return 0;
}
