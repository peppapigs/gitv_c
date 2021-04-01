#include <stdio.h>
#define MAXLINE     20

int main(void){

        /*fgets(): [捕获回车] & fputs()*/

        char line[MAXLINE];
 
        printf("please enter string:\n");
        while( fgets(line, MAXLINE, stdin) != NULL && line[0] != '\n' ){
                fputs(line, stdout);
                /*一个奇妙的结果,当键盘输入的一行字符数远大于20时，依旧形式上感觉
                 * 打印出了多于20字节的字符在一行上，
                 * 实际原因：
                 * 当输入一行大于20个字符的字符串时，
                 * 会截取一行中的19个字符补充一个空字符存储到line数组中
                 * 作为第一次fputs输出,注意此时line数组中并没有回车字符，
                 * 所以不会换行，接下来第二次fgets继续将缓存行中剩余的字符直到第一个
                 * 回车出现存储到line数组覆盖数组中之前的字符串，这次数组中含有回车，
                 * 从而构成了一个完整的奇妙行的输出*/
        }
        
        return 0;
}
