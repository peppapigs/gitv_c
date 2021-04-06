#include <stdio.h>
#include <string.h>
#define LEN     30

struct namect{
        char fname[LEN];
        char lname[LEN];
        int letters;
};

/*原型声明处*/
void getinfo(struct namect * pst);
void makeinfo(struct namect * pst);
void showinfo(const struct namect * pst);

int main(void){

        struct namect person;

        getinfo(&person);
        makeinfo(&person);
        showinfo(&person);
        return 0;
}

void getinfo(struct namect * pst){
        puts("please enter your first name:");
        gets(pst->fname);
        puts("please enter your last name:");
        gets(pst->lname);
}

void makeinfo(struct namect * pst){
        pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst){
        printf("%s %s, your name contain %d letters.\n",
               pst->fname, pst->lname, pst->letters);
}
