#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIMIT 80

void Toupper(char *line);
int Punctcount(const char *line);
int main(void){

        char line[LIMIT];
        //char * find;

        puts("please enter a line:");
        gets(line);
        Toupper(line);
        puts(line);
        printf("that line has %d punctuation characaters.\n", Punctcount(line));
        return 0;
}

void Toupper(char *line){

        while(*line){
                *line = toupper(*line);
                line ++;
        }
}

int Punctcount(const char *line){
        int count = 0;
        int i = 0;
        while(line[i] != '\0'){
                if(ispunct(line[i]))
                    count ++;
                i ++;
        }

        return count;
}
