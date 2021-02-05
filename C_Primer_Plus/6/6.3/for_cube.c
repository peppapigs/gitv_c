#include <stdio.h>
#include <string.h>
#define NUM "number"
#define CUBE_VALUE "cube_value"

int main(void){

        int n;
        printf("please enter the value of n:");
        scanf("%d", &n);

        printf("%*s %*s\n", strlen(NUM), NUM , strlen(CUBE_VALUE), CUBE_VALUE);

        for(int i = 1; i <= n; i ++){
                printf("%*d %*d\n", strlen(NUM), i, strlen(CUBE_VALUE), i*i*i);
        } 

        return 0;
}
