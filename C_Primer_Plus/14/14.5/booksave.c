#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL     40
#define MAXAUTL     40
#define MAXBKS      10

struct book {
        char title[MAXTITL];
        char author[MAXAUTL];
        float value;
};

int main(void){

        FILE * pbooks;
        int count = 0;
        struct book library[MAXBKS];
        int cur_count;
        int index;

        if((pbooks = fopen("book.dat", "a+b")) == NULL){
                fprintf(stderr, "Can't open book.dat file\n");
                exit(EXIT_FAILURE);
        }

        rewind(pbooks);

        /*一次性查找记录最多MAXBKS条: fread读不出来就跳出读循环*/
        while(count < MAXBKS 
              && 1 == fread(&library[count], sizeof(struct book), 1, pbooks)){
                if(count == 0){
                        puts("Current contents of book.dat:\n");
                }
                printf("%s by %s: $%.2lf\n",
                   library[count].title, library[count].author, library[count].value);
                count ++;
        }

        if(count == MAXBKS){
                puts("The book.dat file is full.");
                exit(EXIT_FAILURE);
        }

        /*数据库文件未满时*/
        puts("Please add new book titles:");
        puts("Press [Enter] at the start of line to stop:");

        cur_count = count;                              //记录数据库当前记录位置

        while(count < MAXBKS 
              && gets(library[count].title) != NULL 
              && library[count].title[0] != '\0'){      //仅接受回车就会读取成空字符
                puts("Now enter the author:");
                gets(library[count].author);
                puts("Enter the price:");
                scanf("%f", &library[count].value);      //价格时浮点型scanf
                count ++;

                while(getchar() != '\n'){
                        continue;
                }

                if(count < MAXBKS){
                        puts("Enter the next title:");
                }

        }

        if(count > 0){
                fwrite(&library[cur_count], sizeof(struct book), count-cur_count, pbooks);      //一次性写入后续添加的记录
                
                /*重新打印所有记录*/
                puts("Here is a list of books:\n");
                for(index = 0; index < count; index ++){
                        printf("%s by %s: $%.2lf\n",
                               library[index].title, library[index].author, library[index].value);
                }

        }
        else{
                puts("No books? Too bad.\n");
        }

        puts("\nBye");
        
        if(fclose(pbooks) != 0){
                fprintf(stderr, "file close failure.\n");
                exit(EXIT_FAILURE);
        }

        return 0;
}
