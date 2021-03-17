#include <stdio.h>
#include <string.h>
#define MAX 40
#define ANWSER "Grant"

/*strcmp(): 比较两个字符串内容的大小，而非比较两个常量地址*/
int main(void){

        char try[MAX];

        puts("who is buried in Grant bomb?");
        gets(try);

        while(strcmp(try, ANWSER) != 0){    //or: while(strcmp(try, ANWSER))
               puts("wrong! try again."); 
               gets(try);

        }

        puts("well done!");
        return 0;
}
