#include <stdio.h>
#include <string.h>

void fit(char * string, unsigned int size);
int main(void){
        
        char mesg [] = "things should be as simple as possible!"; //字符串数组可更改

        puts(mesg);
        fit(mesg, 10);
        puts(mesg);

        puts(mesg + 11);
        return 0;
}

void fit(char * string, unsigned int size){
        if(strlen(string) > size)
                string[size] = '\0';
}
