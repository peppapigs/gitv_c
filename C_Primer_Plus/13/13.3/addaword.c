#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE    40

int main(void){

        char words[SIZE];
        FILE *fp;
        if( (fp = fopen("words", "a+")) == NULL ){
                fprintf(stdout, "Can not open file.\n");
                exit(1);
        }

        puts("Enter some words to add to the file; press thekey at the beginning of a line to terminate.");

        while(gets(words) != NULL && words[0] != '\0'){
                fprintf(fp, "%s", words);       //words数组字符串输出到fp文件中,所以每行之后的输出就不是在标准输出中显示了
        }

        /*此时，文件指针已经指向文件末尾*/
        puts("file content:");
        /*rewind():重新调整文件指针的位置，重置向文件开头*/
        rewind(fp);
        /*fscanf():捕获以fp文件作为的输入-->存放到words数组中*/
        while( fscanf(fp, "%s", words) == 1 )
                puts(words);

        if(fclose(fp) != 0){
                fprintf(stderr, "file close failed.\n");
                exit(2);
        }
        return 0;
}
