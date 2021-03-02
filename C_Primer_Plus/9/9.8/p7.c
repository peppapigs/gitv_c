#include <stdio.h>
#include <ctype.h>

int func(char);

int main(void){

        int ch;
        
        printf("please enter a string.\n");
        while((ch = getchar()) != EOF){
                printf("return value: %d.\n", func(ch));

                /*处理输入行的冗余影响*/
                while(getchar() != '\n')
                        continue;
        }

        printf("bye!\n");
        return 0;
}

int func(char ch){
        
                int value;

                if(islower(ch)){
                        printf("%c: %d\t", ch, ch-'a'+1);
                        value = ch-'a'+1;
                }
                else if(isupper(ch)){
                        printf("%c: %d\t", ch, ch-'A'+1);
                        value = ch-'A'+1;
                }
                else
                        value = -1;

                return value;
}
