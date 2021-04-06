#include <stdio.h>
#include <string.h>
#define SIZE    5 
struct fullname{
        char fname[20];
        char mname[20];
        char lname[20];
};

struct person{
        char sno[10];
        struct fullname name;
};

void show(struct person * record);

int main(void){

        struct person record[SIZE] = {
                {"111111111", {"bei", "xiao", "Mo"}},
                {"111111112", {"zhao", "", "Zhan"}},
                {"111111113", {"zui", "da", "Lee"}},
                {"111111114", {"liu", "xiao", "Yan"}},
                {"111111115", {"shuang", "", "Wu"}}
        };

        show(record);
        return 0;
}

void show(struct person * record){
        
        int i;
        for(i = 0; i < SIZE; i ++){
                printf("%s, %s %s%s -- %s\n", 
                       record[i].name.lname,
                       record[i].name.fname,
                       record[i].name.mname,
                       ((strcmp(record[i].name.mname, "") == 0)? "": "."),
                       record[i].sno
                       );
        }
}
