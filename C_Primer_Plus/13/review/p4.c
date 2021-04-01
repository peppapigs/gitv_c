#include <stdio.h>
#include <stdlib.h>

/*"+y: 块选中后复制yank到系统剪切板寄存器*/
int main(int argc, char * argv[]){

        double total = 0;
        double num;
        int i = 0;
        FILE * fp;
        

        if(argc < 2)
                fp = stdin;
        else if(argc == 2){

                if((fp = fopen(argv[1], "r")) == NULL){
                        fprintf(stderr, "%s can not be opened.\n", argv[1]);
                        exit(1);
                }

        }
        else{
                fprintf(stderr, "Usage: %s [filename]\n", argv[0]);
                exit(2);
        }


        /*针对文件类型指针fp统一处理: 优雅!!!*/

        //fscanf可以将文件形式数值字符串转换为数值
        //然而fread要从存储为二进制的数值文件中才能读取出数值，而无法将字符串数值读出
        while(!feof(fp) && (fscanf(fp, "%lf", &num) == 1)){//此判断条件不允许文件中有字符
                total += num;
                ++ i;
        }

        /*计算输出*/
        if(i > 0)
                printf("average of %d values: %.2lf.\n", i, total/i);
        else
                printf("There is no input number.\n");

        /*关闭文件*/
        if(fclose(fp) != 0){
                fprintf(stderr, "%s can not be opened.\n", argv[1]);
                exit(3);
        }
        return 0;
}

