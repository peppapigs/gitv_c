#include <stdio.h>
#define SIZE 81

void strncpy1(char * s1, char * s2, int n);

int main(void){

        char s1[SIZE];
        char s2[SIZE];
        int n;

        puts("please enter a string for s2:");
        while(gets(s2) && s2[0] != '\0'){

                puts("please enter len:");
                scanf("%d", &n);

                /**/
                while(getchar() != '\n')
                        continue;

                strncpy1(s1, s2, n);
                puts(s1);
                puts("please enter a string for s2:");
        }
        puts("Done!");
        return 0;
}

void strncpy1(char * s1, char * s2, int n){
        
        int i = 0;
        while(*s2 != '\0' && i < n){

                s1[i] = *s2;
                s2 ++;
                i ++;
        }

        s1[i] = '\0';
}
