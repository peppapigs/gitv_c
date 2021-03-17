#include <stdio.h>
#include <string.h>

#define SIZE 81

char * string_in(const char * string1, const char * string2);

int main(void){
        char str1[SIZE];
        char str2[SIZE];

        puts("please enter str1 string:");
        while(gets(str1) && str1[0] != '\0'){

                puts("please enter str2 string:");
                if(gets(str2) && str2[0] != '\0'){
                        if(string_in(str1, str2) != NULL){
                                printf("%s at %s position:%p\n",
                                  str2, string_in(str1, str2), string_in(str1, str2));
                        }
                        else
                                printf("%s not in %s\n", str2, str1);
                        
                }
                puts("please enter str1 string:");
        }
        return 0;
}

char * string_in(const char * string1, const char * string2){

        if(strlen(string1) < strlen(string2))
                return NULL;
        else{
                /*最多比较次数: strlen(string1) - strlen(string2) + 1*/
                while(*string1){
                        if(!strncmp(string1, string2, strlen(string2)))
                                return (char *)string1;
                        else{
                                string1 ++;
                        }
                }
                return NULL;
        }

}
