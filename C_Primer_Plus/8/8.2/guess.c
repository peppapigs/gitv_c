#include <stdio.h>

/*行输入中换行符可能带来的问题*/
/*每次输入判断，缓冲区都存在一个字符和回车*/
int main(void){
        /*最后问题：如果第一次输入回车导致第二次判断问题,需要最外层判断ch\
         * 与回车关系的处理*/

        int guess = 1;

        char ch;
        printf("please enter 'y' or 'n' for certain the number.\n");

        printf("the number is %d?\n", guess);

        while((ch) != 'y'){
                if(ch == 'n'){
                    printf("the number is %d?\n", ++guess);
                }
                else{
                    printf("I only understand y or n.\n");
                }

                /*跨过判断缓存区内取出的回车符号,同时还让no输入等同于n输入*/
                while(getchar() != '\n')
                        continue;
        }

        printf("I knew I could do it.\n");
        return 0;
}
