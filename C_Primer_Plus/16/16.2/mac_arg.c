#include <stdio.h>

/*类函数宏*/
#define SQUARE(X)   X*X     //改进：#define SQUARE(X)  (X)*(X)--->改进:((x)*(x))
#define PR(X)       printf("The result is %d\n", X)

int main(void){
        
        int x = 4;
        int z;

        z = SQUARE(x);

        printf("x = %d\n", x);
        printf("Evaluaing SQUARE(x): ");
        PR(z);

        z = SQUARE(2);
        printf("Evaluaing SQUARE(2): ");
        PR(2);
        
        printf("Evaluaing SQUARE(x+2): ");
        PR( SQUARE(x+2) );      //SQUARE(x+2)预执行先替换->x+2*x+2
        printf("Evaluaing SQUARE((x+2)): ");
        PR( SQUARE((x+2)) );      //SQUARE((x+2))预执行先替换->(x+2)*(x+2)
        
        printf("Evaluaing 100/SQUARE(2): ");
        PR( 100/SQUARE(2) );      //预执行先替换->100/2*2->再从左到右规则

        printf("x is %d\n", x);
        printf("Evaluaing SQUARE(++x): ");
        PR( SQUARE(++x) );      //预执行先替换->100/2*2->再从左到右规则

        return 0;
}
