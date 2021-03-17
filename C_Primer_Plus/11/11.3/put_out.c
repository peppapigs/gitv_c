#include <stdio.h>

/*puts()*/
int main(void){

        char str[80] = "an array was initiailize to me";
        const char * str2 = "an pointer was initiailize to me";

        puts("im an argument to puts().");
        puts(str);
        puts(str2);
        puts(&str[5]);
        puts(str2 + 4);

        return 0;
}
