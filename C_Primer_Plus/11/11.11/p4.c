#include <stdio.h>
#define SIZE 80

/*实现strchr()*/

char * strchr_1(const char * str, char chr);
int main(void){

        char chr;

        char * pos;
        char input[SIZE];
        puts("please enter a string:");
        gets(input);
        puts("please enter a character:");
        chr = getchar();
        /*此处可以消除行缓冲区冗余字符和回车字符，虽然无影响*/
        while(getchar() != '\n')
                continue;

        pos = strchr_1(input, chr);
        
        if(pos == NULL)
                puts("not found!");
        else
                printf("%s first appear at %p\n", pos, pos);

        return 0;
}

char * strchr_1(const char * str, char chr){
       

        while(*str != chr && *str != '\0'){

                str ++;
        }
        if(*str != '\0')
                return (char *)str;
        else
                return NULL;
}
