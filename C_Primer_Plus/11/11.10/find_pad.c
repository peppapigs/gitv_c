#include <stdio.h>


/*string 为形式参数获得字符串地址*/
char * strblk(const char * string){

        //if(string == NULL)
        //        return NULL;

        while(*string != ' ' && *string != '\0'){
                string ++;
        }

        /*end*/
        if(*string == '\0')
                return NULL;
        else
                return (char *)string;  //因string是const,需要类型转换后才可赋给char *
}

int main(void){

        char *str;

        while(gets(str)){

            printf("%s", strblk(str)); 
        }
        return 0;
}
