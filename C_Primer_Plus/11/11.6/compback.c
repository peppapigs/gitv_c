#include <stdio.h>
#include <string.h>

int main(void){

        printf(" A, A: %d\n", strcmp("A", "A"));
        printf(" A, B: %d\n", strcmp("A", "B"));
        printf(" C, A: %d\n", strcmp("C", "A"));
        printf(" AB, AC: %d\n", strcmp("AB", "AC"));
        printf(" AB, BA: %d\n", strcmp("AB", "BA"));
        return 0;
}
