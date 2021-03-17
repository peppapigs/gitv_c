#include <stdio.h>

/*use getchar() and putchar() to program I/O function like puts(but no \'\\n)*/
/*just greatly suit the getting string from gets()*/
/*if the string from fgets(), it should solve the problem of '\n' of string*/

void put1(const char * string){

        while(*string != '\0')
                putchar(*string++);
        /**/
        //putchar('\n');
}
