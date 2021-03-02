#include <stdio.h>

/*在一行的开始处ctrl+D被输入设备识别为文件结尾信号，一行末尾不行*/
int main(void){

        int ch;//EOF决定int类型的ch

        printf("please enter char:\n"); //若输出定向到文件，拿着一条语句内容也会进入文件
        while( (ch = getchar() ) != EOF ){
                putchar(ch);
        }
        return 0;
}
