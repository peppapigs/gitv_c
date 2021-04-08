#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

double * new_d_array(int paramN, ...);
void show_array(const double * list, int paramN);

int main(void){

        double * p1;
        double * p2;

        p1 = new_d_array(5, 1.2, 2.3, 3.4, 4.5, 5.6);
        p2 = new_d_array(4, 100.0, 20.00, 8.08, -1890.0);

        show_array(p1, 5);
        show_array(p2, 4);

        free(p1);
        free(p2);

        return 0;
}

double * new_d_array(int paramN, ...){              //1

        int index;
        double * list;

        va_list ap;                                 //2
        va_start(ap, paramN);                       //3

        list = (double *)malloc(paramN * sizeof(double));

        for(index = 0; index < paramN; index ++){
                list[index] = va_arg(ap, double);   //4
        }

        va_end(ap);                                 //5
        return list;
}


void show_array(const double * list, int paramN){
        
        int i;
        for(i = 0; i < paramN; i ++){
                printf("%g   ", list[i]);
        }
        printf("\n");
}
