#include <stdio.h>
#include <string.h>
#define LEN     30

struct namect{
        char fname[LEN];
        char lname[LEN];
        int letters;
};

/*原型声明处*/
struct namect getinfo(void);
struct  namect makeinfo(struct namect);
void showinfo(struct namect);           //传过来的时变量的副本，没必要const

int main(void){

        struct namect person;

        //相同结构体变量可以赋值
        person = getinfo();         //返回的结构体类型和person结构体类型相同
        person = makeinfo(person);  //传的都是变量副本
        showinfo(person);           //传的都是变量副本
 
        return 0;
}

struct namect getinfo(void){
        struct namect temp;
        
        puts("please enter the first name:");
        gets(temp.fname);          //scanf("%s")遇到空白字符停止，顺便清理冗余更好
        puts("please enter the last name:");
        gets(temp.lname);
        return temp;
}

struct namect makeinfo(struct namect temp){
       temp.letters = strlen(temp.fname) + strlen(temp.lname);
       return temp;
}

void showinfo(struct namect temp){
        printf("%s %s, your name contain %d letters.\n",
               temp.fname, temp.lname, temp.letters);
}
