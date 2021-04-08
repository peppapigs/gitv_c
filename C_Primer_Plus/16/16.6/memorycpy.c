#include <stdio.h>
#include <string.h>    //memcpy(void * restrict s1, void * restrict s2, size_t n);

int main(void){

        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
        int num[10];
        int i;

        //内存块拷贝
        memcpy(num, arr, 10 * sizeof(int));

        for(i = 0; i < 10; i ++){
                printf("%3d", num[i]);
        }
        printf("\n");
        return 0;
}
