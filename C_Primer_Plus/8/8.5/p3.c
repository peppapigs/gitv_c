#include <stdio.h>
#include <ctype.h>

int main(void){

        int upper_cnt = 0;
        int lower_cnt = 0;

        int ch;

        while((ch = getchar()) != EOF){

                //if(ch > 'a' && ch < 'z')
                if(islower(ch))
                        lower_cnt ++;
                //if(ch > 'A' && ch < 'Z')
                if(isupper(ch))
                        upper_cnt ++;
        }

        printf("lower_cnt: %d, upper_cnt: %d.\n", lower_cnt, upper_cnt);
        return 0;
}
