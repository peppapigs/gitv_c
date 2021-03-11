#include <stdio.h>
#define SIZE 5

void show_array(const double arr[], int n);
void mult_array(double arr[], int n, double value);

int main(void){

        double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
        show_array(dip, SIZE);
        mult_array(dip, SIZE, 2.5);
        printf("mult_arr:\n");
        show_array(dip, SIZE);
        return 0;
}

void show_array(const double arr[], int n){

        int index;
        for(index = 0; index < n; index ++){

                printf("%.2f  ", *(arr+index));
        }
        printf("\n");
}

void mult_array(double arr[], int n,  double value){

        int index;
        for(index = 0; index < n; index ++){
                *(arr + index) *= value;
        }
}
