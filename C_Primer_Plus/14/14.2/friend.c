#include <stdio.h>
#define SIZE    40

struct name{
        char first[SIZE];
        char last[SIZE];
};

struct friend{
        struct name handle;
        char favfood[SIZE];
        char job[SIZE];
        float income;
};

int main(void){

        /*结构变量定义以及初始化*/
        struct friend fellow = {
                {"Andy","Geogre"},      //初始化类型要对应
                "mogle",
                "java development engineer",
                .income = 5000.00      //or 5000.00
        };

        printf("friend name: %s %s, income:%.2lf\n",
               fellow.handle.first, fellow.handle.last, fellow.income);
        return 0;
}
