#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE    40

struct namect{
        /*
         *  采用结构体的字符指针来存储字符串，需要指向已经分配好的空间，
         *  用malloc来弥补未初始化指针指向未知的缺陷
         */
        char * fname;
        char * lname;

        int letters;
};

/*原型声明处*/
void getinfo(struct namect * temp);
void makeinfo(struct namect * temp);
void showinfo(const struct namect * temp); 
void cleanup(struct namect * temp);

int main(void){

        struct namect person;

        getinfo(&person);
        makeinfo(&person);
        showinfo(&person);         
 
        /*内存申请完成目的后要释放*/
        cleanup(&person);
        return 0;
}

void getinfo(struct namect * temp){
        
        char name[SIZE];
        puts("please enter the first name:");
        gets(name);
        temp->fname = (char *)malloc(sizeof(char) * (strlen(name) + 1));
        /*关键：初始化,如何将字符串放入temp->fname分配好的空间？strcpy()*/
        strcpy(temp->fname, name);

        puts("please enter the last name:");
        gets(name);
        temp->lname = (char *)malloc(sizeof(char) * strlen(name) + 1);
        strcpy(temp->lname, name);
}

void makeinfo(struct namect * temp){
       temp->letters = strlen(temp->fname) + strlen(temp->lname);
}

void showinfo(const struct namect * temp){
        printf("%s %s, your name contain %d letters.\n",
               temp->fname, temp->lname, temp->letters);
}

void cleanup(struct namect * temp){
        free(temp->fname);
        free(temp->lname);
}
