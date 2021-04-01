#include <stdio.h>
#include <stdlib.h>

#define SIZE 40

int main(void){
        /*interaction*/

        FILE * fp;
        char file[SIZE];
        int pos;
        int ch;
        long ch_len;

        puts("please enter the name of file:");
        gets(file);

        /*fopen*/
        if((fp = fopen(file, "rb")) == NULL){
                fprintf(stderr, "%s open failure.\n", file);
                exit(EXIT_FAILURE);
        }

        fseek(fp, 0L, SEEK_END);
        ch_len = ftell(fp) / sizeof(char); 
        fseek(fp, 0L, SEEK_SET);

        /*while->fseek-> fread*/
        printf("enter the postion of file %s(0~%lu):", file, ch_len);
        while(scanf("%d", &pos) == 1 && pos > 0 && pos <= ch_len){

                /*清scanf除行缓冲区的冗余*/
                while(getchar() != '\n')
                        continue;

                /*fseek*/
                fseek(fp, pos * sizeof(char), SEEK_SET);
                /*getc the line last*/
                while((ch = getc(fp)) != '\n' && ch != EOF){
                        putc(ch, stdout);
                }
                putchar('\n');
                /*file pointer re_pos*/
                rewind(fp);
        }
        
        fclose(fp);

        return 0;
}
