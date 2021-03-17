#include <stdio.h>
#include <string.h>

#define LISTSIZE 5

/*strncmp(): 通过第三个参数来决定比较到第几个字符结束，来看是否以某字符串开头*/

int main(void){

        const char * list[LISTSIZE] = {
                                        "astronomy",
                                        "astounding",
                                        "astrophysics",
                                        "ostracize",
                                        "asterism"
                                      };
        unsigned int count = 0;
        int i;

        for(i = 0; i < LISTSIZE; i ++){
                if(strncmp(list[i], "astro", 5) == 0)
                        count ++;
        }

        printf("including number of string astro : %hu\n", count);

        return 0;
}
