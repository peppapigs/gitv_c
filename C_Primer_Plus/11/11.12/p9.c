#include <stdio.h>

#define SIZE 81
/*function to delete the space from string*/

void del_space(char * string);

int main(void){

        char string[SIZE];
        puts("please enter a string:");

        while(gets(string) && string[0] != '\0'){
                del_space(string);
                puts("....");
                printf("new: %s\n", string);
                puts("please enter a string:");
        }
        return 0;
}

void del_space(char * string){
        

        char *pt;
        while(*string){
                if(*string == ' '){
                        /*其实从尾部判断算法更好*/
                        for(pt = string; *pt; pt ++){
                                *pt = *(pt+1);             //写成了*pt++,失误
                        }
                        //*pt = '\0';
                }
                else{
                        string ++;
                }
        }
}
