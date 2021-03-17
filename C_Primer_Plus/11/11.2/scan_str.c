#include <stdio.h>


/*scanf(): == get word  最适合一次只输入一个单词
 * 主要用于以某种标准形式输入的混合类型数据的读取和转换*/
int main(void){

        char name1[11], name2[12];
        int count;

        printf("please enter 2 names:\n");
        count =  scanf("%5s%10s", name1, name2);
        
        printf("names count: %d, name1: %s, name2: %s.\n", count, name1, name2);
        return 0;
}
