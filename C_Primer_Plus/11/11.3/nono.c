#include <stdio.h>

/*问题：puts()函数如何知道在何处停止？*/

int main(void){

        char side_a[] = "side a";
        char dont[] = {'N', 'O', 'T', 'S', 'T', 'R'}; //没有'\0', 声明的不是字符串
        char side_b[] = "side b";

        puts(dont); //dont没有'\0'


        return 0;
}
