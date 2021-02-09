#include <stdio.h>
// #define base_salary 10.00
#define BASE_HOUR 40
#define OVERTIME 1.5
#define BASE1 300
#define BASE2 150
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25

void title(void);

int main(void){

        

        float base_salary;
        
        /**/

        title();

        char ch;
        while(ch = getchar()){
                const float level1 = 8.75;
                const float level2 = 9.33;
                const float level3 = 10.00;
                const float level4 = 11.20;
                
                switch(ch){
                        case '1':
                                base_salary = level1;
                                break;
                        case '2':
                                base_salary = level2;
                                break;
                        case '3':
                                base_salary = level3;
                                break;
                        case '4':
                                base_salary = level4;
                                break;
                        case '5':
                                break;
                        default :
                                //printf("here\n");
                                title();
                                continue;

                }

                if(ch == '5'){
                        printf("bye!\n");
                        return 0;
                }
                else
                        break;
        }


        float salary, tax, taxed_salary;
        printf("please enter total worktime in a week:\n");

        float worktime = 0;


        while(scanf("%f", &worktime) && worktime > 0){
               /*是否加班工资*/
               if(worktime <= BASE_HOUR)
                       salary = worktime * base_salary;
               else
                       salary = BASE_HOUR * base_salary + (worktime - BASE_HOUR)*OVERTIME*base_salary;

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


void title(void){
        printf("************************************\n");
        printf("\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1\) $8.75/hr     ");
        printf("2\) $9.33/hr\n");
        printf("3\) $10.00/hr    ");
        printf("4\) $11.20/hr\n");
        printf("5\) quit\n");
        printf("************************************\n");
        return ;
}

