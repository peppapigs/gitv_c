#include <stdio.h>
#include <string.h>
#define SIZE        40
#define LIM         5
#define TARGSIZE    7 

int main(void){

        char qword[LIM][TARGSIZE];
        char temp[SIZE];

        unsigned int count = 0;
        int i = 0;

        printf("please enter some word, less %d word starting with q:\n", LIM);
        while(i < LIM && gets(temp) != NULL){
                //qword[i] = temp; 这样就不是拷贝了
                if(temp[0] == 'q'){                   //or: !strncmp(temp, "q", 1)
                    strncpy(qword[i], temp, TARGSIZE - 1); //第三个参数是最大可拷贝字符数
                    qword[i][TARGSIZE -1] = '\0';

                    i ++; //update
                    count ++;
                }
                else{
                    continue;
                }
        }

        printf("total number of string that starting with q: %hu.\n", count);

        for(int i = 0; i < LIM; i ++){
                printf("%s\n", qword[i]);
        }
        return 0;
}
