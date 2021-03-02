#include <stdio.h>

int main(void){

        printf("please enter the characters.\n");

        int count = 0;
        int input;

        while((input = getchar()) != EOF){
                
                count ++;

                if(input == '\n'){
                        printf("\\n|%d\t", input);
                        putchar('\n');
                }
                else if(input == '\t')
                        printf("\\t|%d\t", input);
                else if(input == '\b')
                        printf("\\b|%d\t", input);
                else if(input >= 0 && input < ' ')
                        printf("^%c|%d\t", input+64, input);
                else
                        printf("%2c|%d\t", input, input);

                if(count % 10 == 0)
                        putchar('\n');
        }
        return 0;
}
