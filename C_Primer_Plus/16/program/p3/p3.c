#include "p3.h"

struct rect polar_to_rect(const struct polar *po);

int main(void){

        struct polar pol;
        struct rect  rec;

        printf("Please enter len and angle in polar:\n");
        
        scanf("%lf%lf", &pol.len, &pol.angle);

        rec = polar_to_rect(&pol);

        printf("x = %g, y = %g\n", rec.x, rec.y);
        return 0;
}

struct rect polar_to_rect(const struct polar *po){
        double x;
        double y;
        struct rect re;
        double radian;

        //angle_to_radian
        radian = (PI/180) * po->angle;

        //cos sin接收弧度radian
        x = po->len * cos(radian);
        y = po->len * sin(radian);
        re.x = x;
        re.y = y;

        return re;
}

