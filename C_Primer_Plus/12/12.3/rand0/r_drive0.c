#include <stdio.h>

extern unsigned int rand0(void);

int main(void){

        int count;
        for(count = 0; count < 5; count ++){
                printf("%hu ", rand0());
        }
        puts("\n");
        return 0;
}
