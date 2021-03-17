#include <stdio.h>
#include <string.h>
#define LIM 20
#define SIZE 81

void swap(char * *str1, char * *str2);
void sortstr(char * string[], int num);
int main(void){

        char input[LIM][SIZE];              /*每个行指针都是地址常量*/
        char * ptstr[LIM];                  /*指针变量*/
        
        int cnt = 0;
        while(cnt < LIM && gets(input[cnt]) != NULL && input[cnt][0] != '\0'){   
                //gets丢掉回车而转储回车之前值,所以需要处理直接回车结束情形

                ptstr[cnt] = input[cnt];
                cnt ++;
        }

        sortstr(ptstr, cnt);                //传递指针数组的首地址

        printf("string sort:\n");
        for(int j = 0; j < cnt; j ++){   

                /*注意：如果j<LIM就会导致因访问未知地址的数据而导致数据转储问题*/
                puts(ptstr[j]);
        }
        return 0;
}

void sortstr(char * string[], int num){

        for(int top = 0; top < num -1; top ++){
                for(int seek = 1+top; seek < num; seek ++){
                        if(strcmp(string[top], string[seek]) > 0){

                                //char * temp;
                                //temp = string[top];
                                //string[top] = string[seek];
                                //string[seek] = temp;
                                /*指针数组中的元素(地址)的地址*/
                                /*即：input[top]字符串地址的存储的地址*/
                                swap(&string[top], &string[seek]); 
                        }
                }
        }
}


/*交换指针的指针*/
/*!!!一个原则：无论在变量赋值还是地址传递都要遵循发送者接受者二者的数据形式一致*/

void swap(char * *str1, char * *str2){

        char * temp;        //需要交换指针数组中 两指针地址中的值（字符串的地址）
        temp = *str1;       //*str: 即取出地址的地址中 存储的数值（字符串的地址）
        *str1 = *str2;
        *str2 = temp;
}
