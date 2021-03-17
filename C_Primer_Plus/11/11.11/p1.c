#include <stdio.h>

#define SIZE 50

void get_n(char input[], int num);

int main(void){

        int num;
        char input[SIZE];
        puts("please enter a number you want to read:");

        scanf("%d", &num);
        //getchar();

        get_n(input, num);

        if(input[0] != '\0')
            puts(input);
        return 0;
}

void get_n(char input[], int num){

        int i;

        for(i = 0; i < num; i ++){
                input[i] = getchar();
        }

}
