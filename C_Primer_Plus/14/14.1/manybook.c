#include <stdio.h>

#define MAXTITL     31
#define MAXAUTL     41
#define SIZE        100

struct book {
        char title[MAXTITL];
        char author[MAXAUTL];
        float value;
};

int main(void){

        struct book library[SIZE];
        int index = 0;
        int i;

        /*循环录入*/
        printf("please enter the book title.\n");
        printf("press [Enter] at the start of a line to stop.\n");//due to gets()

        while(index < SIZE && gets(library[index].title) != NULL && library[index].title[0] != '\0'){
               puts("now enter the author:");
               gets(library[index].author);
               puts("enter the price:");
               scanf("%f", &library[index].value);

               while(getchar() != '\n')
                       continue;

               ++index;     //update
               
               if(index < SIZE)
                       printf("\nenter the next title:\n");
        }

        if(index > 0){
               printf("total number of inputing book: %d.\n", index);
               printf("here is a list of books:\n");

               for(i = 0; i < index; i ++){
                       printf("%s by %s: %.2lf.\n",
                              library[i].title, library[i].author, library[i].value);
               }
        }
        else
                printf("No book? too bad!\n");
        return 0;
}
