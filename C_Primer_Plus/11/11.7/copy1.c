#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 5

int main(void){

        char qword[LIM][SIZE];
        char temp[SIZE];

        unsigned int count = 0;
        int i = 0;

        printf("please enter some word, less %d word starting with q:\n", LIM);
        while(i < LIM && gets(temp) != NULL){
                //qword[i] = temp; 这样就不是拷贝了
                if(temp[0] == 'q'){                   //or: !strncmp(temp, "q", 1)
                    strcpy(qword[i++], temp);
                    count ++;
                }
                else{
                    continue;
                }
        }

        printf("total number of string that starting with q: %hu.\n", count);
        return 0;
}
