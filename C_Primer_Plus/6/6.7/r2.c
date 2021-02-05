#include <stdio.h>

/*value为double类型，double类型有取值下限,循环到类型下溢*/
int main(void){

        double value;
        for(value = 36; value > 0; value /= 2)
                printf("%lf ", value);
        return 0;
}
