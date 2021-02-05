#include <stdio.h>
#define END 5
int main(void){

        for(int n = END; n >= 0; n --){
                for(char ch = 'F'; ch >= 'A' + n; ch --){
                        printf("%c", ch);
                }
                printf("\n");
        }
        return 0;
}
