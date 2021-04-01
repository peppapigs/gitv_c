#include <stdio.h>
#include <stdlib.h>

#define ARSIZE      100

/*用二进制I/O进行随机访问: 打开方式:wb or rb or ab 
 * 存取：fwrite() & fread()*/
int main(void){

        const char *file = "numbers.dat";
        double numbers[ARSIZE];
        int i;
        FILE *iofile;
        int index;
        double temp;

        long pos;

        /*数组填充*/
        for(i = 0; i < ARSIZE; i ++)
                numbers[i] = 100.0 * i + 1.0/(i + 1);

        /*打开文件*/
        if((iofile = fopen(file, "wb")) == NULL){
                fprintf(stderr, "file %s can not be opened.\n", file);
                exit(1);
        }

        /*二进制数写入到二进制文件中*/
        fwrite(numbers, sizeof(double), ARSIZE, iofile);

        /*fclose*/
        if(fclose(iofile) != 0){
                fprintf(stderr, "file %s can not be closed.\n", file);
                exit(2);
        }


        /*第二部分：从二进制文件中读取数值*/
        if((iofile = fopen(file, "rb")) == NULL){
                fprintf(stderr, "Could not open %s for random access.\n", file);
                exit(3);
        }

        printf("Enter an index in the range 0~%d.\n", ARSIZE - 1);
        while(scanf("%d", &index) == 1 && index >= 0 && index < ARSIZE){

                //应偏移8个字节才对应一个double数值
                pos = (long)index * sizeof(double);
                fseek(iofile, pos, SEEK_SET);                  
                fread(&temp, sizeof(double), 1, iofile);

                printf("index %d value: %.2lf.\n", index, temp);
                printf("Continue next an index (out of range 0~%d to quit.\n",
                       ARSIZE - 1);
        }

        /*fclose*/
        if(fclose(iofile) != 0){
                fprintf(stderr, "file %s can not be closed.\n", file);
                exit(2);
        } 

        puts("BYE!");

        
        return 0;
}
