#include <stdio.h>


int main(void){
        int age;
        float assets;
        char pet[40];
        
        printf("please enter your age ,assets and favorate pet:\n");
        scanf("%d %f", &age, &assets);
        scanf("%s", pet);

        printf("%d %f %s\n", age, assets, pet);
        return 0;
}
