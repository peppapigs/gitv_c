#include <stdio.h>


int main(void){

        int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
        /*定义一个指向内含两个int类型值的数组的指针*/
        int (* pz)[2];
        /*把对数组的操作都转换为对指针的操作*/
        pz = zippo;

        printf("pz = %p, pz+1 = %p, *pz = %p\n", pz, pz + 1, *pz);
        printf("pz[0] = %p, pz[0]+1 = %p\n", pz[0], pz[0] + 1);
        printf("*pz = %p, *pz+1 = %p\n", *pz, *pz + 1);


        printf("pz[0][0] = %d\n", pz[0][0]);
        printf("**pz = %d, *pz[0] = %d\n", **pz, *pz[0]);
        printf("*(*(pz+2) + 1) = %d\n", *(*(pz+2) + 1));
        return 0;
}
