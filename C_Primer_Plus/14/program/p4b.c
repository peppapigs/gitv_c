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

void show(struct person record);

int main(void){

        int index;

        struct person record[SIZE] = {
                {"111111111", {"bei", "xiao", "Mo"}},
                {"111111112", {"zhao", "", "Zhan"}},
                {"111111113", {"zui", "da", "Lee"}},
                {"111111114", {"liu", "xiao", "Yan"}},
                {"111111115", {"shuang", "", "Wu"}}
        };

        for(index = 0; index < SIZE; index ++){
                show(record[index]);
        }
        return 0;
}

void show(struct person record){
        
        printf("%s, %s %s%s -- %s\n", 
               record.name.lname,
               record.name.fname,
               record.name.mname,
               ((strcmp(record.name.mname, "") == 0)? "": "."),
               record.sno
               );
}
