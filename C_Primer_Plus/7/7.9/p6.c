#include <stdio.h>


int main(void){

        int num;
        char pre = '\0';
        char ch;

        printf("please enter the string:\n");
//        while( (pre = getchar()) != '#'){
//                //可继续套娃
//                if(pre == 'e'){
//                        if((ch = getchar()) == 'i')
//                                num ++;
//                }
//        }
//

        while((ch = getchar()) != '#'){
                if(ch == 'i' && pre == 'e')
                        num ++;
                pre = ch;
        }

        /*因为所有显示输出都在while输入循环之外执行，所以回车并不会
         * 影响输出格式*/
        printf("ei appeared %d.\n", num);
        return 0;
}
