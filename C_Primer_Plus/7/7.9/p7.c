#include <stdio.h>
#define H_BASE_SALARY 10.00
#define BASE_HOUR 40
#define OVERTIME 1.5
#define BASE1 300
#define BASE2 150
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25

int main(void){

        float salary, tax, taxed_salary;
        printf("please enter total worktime in a week:\n");

        float worktime = 0;
        while(scanf("%f", &worktime) && worktime > 0){
               /*是否加班工资*/
               if(worktime <= BASE_HOUR)
                       salary = worktime * H_BASE_SALARY;
               else
                       salary = BASE_HOUR * H_BASE_SALARY + (worktime - BASE_HOUR)*OVERTIME*H_BASE_SALARY;

               /*根据工资来判断对应税率更简单*/
               if(salary <= BASE1){
                       tax = salary * RATE1;
                       taxed_salary = salary - tax;
               }
               else if(salary <= BASE1 + BASE2){
                       tax = BASE1 * RATE1 + (salary - BASE1) * RATE2;
                       taxed_salary = salary - tax;
               }
               else{
                       tax = BASE1 * RATE1 + BASE2 * RATE2 + (salary - BASE1 -BASE2) * RATE3;
                       taxed_salary = salary - tax;
               }


               printf("salary: %.2f, tax: %.2f, taxed_salary: %.2f.\n", 
                       salary, tax, taxed_salary);
               printf("please continue enter worktime:\n");
        }

        printf("enter wrong worktime.\n");
        return 0;
}
