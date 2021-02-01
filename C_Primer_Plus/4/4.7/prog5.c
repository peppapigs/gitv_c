#include <stdio.h>
#include <string.h>

int main(void){

        char fname[20];
        char lname[20];

        printf("please enter your first name:\n");
        scanf("%s", fname);
        printf("please enter your last name:\n");
        scanf("%s", lname);

        printf("%s %s\n", fname, lname);
        printf("%*d %*d\n",strlen(fname), strlen(fname), strlen(lname), strlen(lname));
        return 0;

}
