#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

        double num;
        int times;
        double result = 1.0;

        char * end;                 /*pointer*/
        num = strtod(argv[1], &end);
        times = atoi(argv[2]);

        int i;
        for(i = 0; i < times; i ++){
                result *= num;
        }

        printf("%lf of %d times: %.2lf.\n", num, times, result);
        return 0;
}
