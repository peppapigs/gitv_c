#include <stdio.h>

/*use getchar() and putchar() to program I/O function like puts*/
/*just greatly suit the getting string from gets()*/
/*if the string from fgets(), it should solve the problem of '\n' of string*/

/*addint the module of counting characters from string*/
int put2(const char * string){

        int cnt = 0;
        while(*string){

                cnt ++;
                putchar(*string++);
        }
        putchar('\n');
        return cnt;
}
