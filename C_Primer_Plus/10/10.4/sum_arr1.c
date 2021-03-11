#include <stdio.h>
#define SIZE 10

int sum(int ar[], int n);

int main(void){

        int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
        int answer;

        answer = sum(marbles, SIZE);
        printf("the total of marbles: %d.\n", answer);
        printf("the size of marbles: %zd bytes.\n", sizeof marbles);
        return 0;
}

/*因为该函数中形参 ar[]只是告知给函数ar为一个指向int类型数组数据的指针，
 * 所以sum函数仅仅通过ar[]是不知道该指针指向的数组的大小的，所以 sizeof ar = 8*/
int sum(int ar[], int n){
        int i;
        int total = 0;

        for(i = 0; i < n; i ++)
                total += ar[i];
        printf("the size of ar: %zd bytes.\n", sizeof ar);
        return total;
}
