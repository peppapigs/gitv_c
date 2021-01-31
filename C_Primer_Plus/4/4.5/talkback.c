#include <stdio.h>

int main(void){

        float weight;
        char name[40];

        printf("please enter you name:\n");
        scanf("%s", name);

        printf("please input your weight:\n");
        scanf("%f", &weight);

        printf("%s, your weight is %.2f.\n", name, weight);

        return 0;
}
