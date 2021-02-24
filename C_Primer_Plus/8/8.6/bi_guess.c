#include <stdio.h>

/*行输入中换行符可能带来的问题*/
/*每次输入判断，缓冲区都存在一个字符和回车*/
int main(void){
        /*最后问题：如果第一次输入回车导致第二次判断问题,需要最外层判断ch\
         * 与回车关系的处理*/

        int low = 1;
        int high = 100;
        int guess = 50;

        char ch;
        printf("please enter 'y' or 'h'(>guess value) for certain the number.\n");

        printf("the number is %d?\n", guess);

        while((ch = getchar()) != 'y'){
                if(ch == 'h'){
                    low = guess + 1;
                    //guess = (guess + high)/2;    
                    //printf("is it %d?\n", guess);
                }
                else if(ch == 'l'){
                    high = guess - 1;
                    //guess = (low + guess)/2;
                    //printf("is it %d?\n", guess);
                }
                else
                    printf("only can understand y, h, l.\n");

                guess = (low + high)/2;
                printf("is it %d?\n", guess);

                /*跨过判断缓存区内取出的回车符号,同时还让no输入等同于n输入*/
                while(getchar() != '\n')
                        continue;
        }

        printf("I knew I could do it.\n");
        return 0;
}
