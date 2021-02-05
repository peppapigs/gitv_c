#include <stdio.h>
#include <string.h>

int main(void){

        char words[30];
        int index;

        printf("please enter a word: ");
        scanf("%s", words);

        printf("word: %s, len: %d\n", words, strlen(words));

        for(index = strlen(words) - 1; index >= 0; index --){
                printf("%c", words[index]);
        }

        printf("\n");

        return 0;
}
