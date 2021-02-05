#include <stdio.h>
#include <string.h>
#define SIZE 255
#define LEN 10
/*
 *  for循环输入字符形式录入字符串，限定字长的字符被存储到限定的位置，
 *  多打的字符会保存在缓冲区
 *
 */
int main(void){

        char arr[SIZE];
        int index;

        printf("please enter 10 char:\n");
        for(index = 0; index < LEN; index ++){
                scanf("%c", &arr[index]);
        }

        printf("desc sort:");
        for(index = strlen(arr) - 1; index >= 0; index --){
                printf("%c", arr[index]);
        }
        printf("\n");
        return 0;
}
