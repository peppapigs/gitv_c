#include <stdio.h>
#include <ctype.h>
#define STOP '|'

int main(void){

        char ch;
        unsigned long ch_num = 0;
        int arr[500] = {0};
        int rear = 0;

        unsigned long word_num = 0;
        unsigned long line_num = 0;

        unsigned int part_lines;
        char pre;

        printf("please enter some chars or \'|\' for quit: \n");
        while((ch = getchar())!= STOP){
                
                if(ch == '\n')
                        ++ line_num;
                else if( isspace(ch) || ispunct(ch) )
                        arr[rear++] = 0;
                else
                        arr[rear++] = 1;
                        
                /*单独判断非空白字符个数*/
                if(!isspace(ch))
                        ch_num ++;

                pre = ch; //用于记录|之前一个字符
        }

        if(pre != '\n')
                part_lines = 1;
        else
                part_lines = 0;

        for(int index = 0; index < rear; index ++){
                printf("%d ", arr[index]);
                if(arr[index] == 1 && arr[index+1] == 0)
                        word_num ++;
        }

        printf("line_num: %lu, word_num: %lu, ch_num: %lu, partial lines: %d\n",
                        line_num, word_num, ch_num, part_lines);
        return 0;
}
