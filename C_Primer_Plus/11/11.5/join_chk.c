#include <stdio.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13

int main(void){

        int available;
        char bug[BUGSIZE];

        char flower[SIZE];
        char addon [] = "s smell like old shoes.";
        puts("what's you favorite flower?");
        gets(flower);

        if(strlen(flower) + strlen(addon) + 1 <= SIZE){
                strcat(flower, addon);
        }
        puts(flower);


        printf("please enter a kind of bug:\n");
        gets(bug);
        available = BUGSIZE - strlen(bug) -1;
        strncat(bug, addon, available);
        puts(bug);
        return 0;
}
