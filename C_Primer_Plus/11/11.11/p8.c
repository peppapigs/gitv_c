#include <stdio.h>
#include <string.h>

#define SIZE 81

/*字符串反叙述处*/

void reverse_str(char * str);

int main(void){

        char string[SIZE];

        puts("please enter a string (to get a string that reversed)");
        gets(string);

        reverse_str(string);

        puts("reverse string:");
        puts(string);
        return 0;
}

void reverse_str(char * str){
        int len = strlen(str);

        char temp;
        int star = 0;
        int end = len - 1;

        while(star < end){
                temp = str[star];
                str[star] = str[end];
                str[end] = temp;

                star ++;
                end --;
        }
}
