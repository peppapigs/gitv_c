#include <stdio.h>
#define MAX 20

/*sprintf()*/

int main(void){

        char first[MAX];
        char last[MAX];
        char format[2 * MAX + 10];

        double price;

        puts("please enter first name:");
        gets(first);
        puts("please enter last name:");
        gets(last);
        puts("please enter the price:");
        scanf("%lf", &price);

        sprintf(format, "%s, %s:$ %6.2lf", last , first, price);

        puts(format);
        return 0;
}
