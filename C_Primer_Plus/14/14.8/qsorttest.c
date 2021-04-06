#include <stdio.h>
#include <stdlib.h>  /*for qsort*/

#define LEN     40

typedef struct student{

        char name[LEN];
        int score;
}student;

int compare(const void * a, const void * b);
int main(void){

        int i;

        student list[6] = {
                {
                        "张三",
                        75
                },
                {
                        "李四",
                        77
                },
                {
                        "王五",
                        68
                },
                {
                        "吴老六",
                        88
                },
                {
                        "谢老七",
                        67
                }
        };
        
        int (*cmp)(const void * a, const void * b) = compare;

        /*
         * 1.待排序的数组地址
         * 2.数组中元素的个数
         * 3.单个元素的所占内存大小
         * 4.排序数组涉及比较两个元素的 比较方案
         */
        qsort(list, 5, sizeof(student), cmp);

        for(i = 0; i < 5; i ++){
                printf("%s: %d\n", list[i].name, list[i].score);
        }
        putchar('\n');

        return 0;
}

int compare(const void * a, const void * b){
        /*a,b 都是student结构类型变量的地址*/
        /*需要按照结构变量的score排序*/
        /*默认升序排列，若(student *)b->score - (student *)a->score则为降序排列*/
        return  ((student *)a)->score - ((student *)b)->score;

}
