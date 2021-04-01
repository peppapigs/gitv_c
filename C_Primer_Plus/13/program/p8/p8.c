#include <stdio.h>
#include <stdlib.h>


/*
 *  command char filename1, filename2
 *
 */

//continue for another src_file print


int main(int argc, char * argv[]){

        FILE * fp;
        int i;
        int ch;     //for eof
        int count = 0;
        if(argc < 2){
                fprintf(stderr, "Uage: %s char [filename...]\n", argv[0]);
                exit(EXIT_FAILURE);
        }
        if(argc == 2){
                fp = stdin;
                while((ch = getchar()) != EOF){
                        if(ch == argv[1][0])
                                ++ count;
                }
                printf("The number of %c appear: %d.\n",
                       argv[1][0], count);
        }

        for(i = 2; i < argc; i ++){
                if((fp = fopen(argv[i], "r")) == NULL){
                        fprintf(stderr, "%s open failure.\n", argv[i]);
                        continue;       //一个文件打开失败，跳过直接打开下一个文件
                }

                while((ch = getc(fp)) != EOF){
                        if((char)ch == argv[1][0])
                                ++ count;
                }

                printf("The number of %c appear in the file %s: %d.\n",
                       argv[1][0], argv[i], count);

                /*clear count*/
                count = 0;
                /*fclose*/
                if(fclose(fp) != 0){
                        fprintf(stderr, "%s close failure.\n", argv[i]);
                }
        }
        return 0;
}
