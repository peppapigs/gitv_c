#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define M_SIZE      12

struct month{
        char monthname[10];
        char abbrev[4];
        int days;
        int num_month;
};
struct month months[M_SIZE] = {
                {"January", "Jan", 31, 1},
                {"Febuary", "Feb", 28, 2},
                {"March", "Mar", 31, 3},
                {"April", "Apr", 30, 4},
                {"May", "May", 31, 5},
                {"June", "Jun", 30, 6},
                {"July", "Jul", 31, 7},
                {"August", "Aug", 31, 8},
                {"September", "Sep", 30, 9},
                {"October", "Oct", 31, 10},
                {"November", "Nov", 30, 11},
                {"December", "Dec", 31, 12}
        };

void eatline(void);
int get_m_day(const struct month * months, int mon_num);
char show_menu(void);
void use_calendar(int * days, int year);
void ToUpper(char *string);
int days(const struct month * months, int mon_num);
int ismonth(char input[]);
int ismonth_o(int mon);
int ismonth_a(char input[]);

int main(void){

        
        char input[20];
        int total;
        int i;
        int mon_num = 0;
        int year;
        int m_day;
        int day;
        char choice;
        int mon;

        
        puts("please enter the year (<=0 to quit):");

        /*不要在主函数内套太多层while。。。。*/
        while(scanf("%d", &year) == 1 && year > 0){

                total = 0;      //key

                /*menu*/
                choice = show_menu();

                printf("Please enter the month:\n");

                if(scanf("%d", &mon) == 1 && (mon >= 1 && mon <= M_SIZE)){
                    mon_num = ismonth_o(mon);
                }
                else{
                        gets(input);
                        if(strlen(input)>3 ){
                                mon_num = ismonth(input);
                        }
                        else{
                                mon_num = ismonth_a(input);
                        }
                }

                total = days(months, mon_num-1);

                /*day: process*/
                day = get_m_day(months, mon_num);

                total += day; 

                printf("the start of year to %d-%d-%d days: %d\n",
                       year, mon_num, day, total);
                puts("please enter the year (<=0 to quit):");
        }
        puts("\nBye!");
        return 0;
}

void selectfun(void (*pfun)(char input[], int *num), char input[], int *num){
        pfun(input, num);
}

int get_m_day(const struct month * months, int mon_num){

        int day = 0;

        printf("Please enter days in %d month:\n", mon_num);
        if(scanf("%d", &day) == 1 && day > 0){

                if(day > months[mon_num].days){

                        printf("this %d month less than %d days\n", mon_num, day);
                        printf("had been setted to max day in this month.\n");
                        day = months[1].days;
                }
        }
        return day;
}


char show_menu(void){

        char ch;
        puts("please enter the mode way(m, a, o) to input month:");
        puts("m) monthname      a) abbrev");
        puts("o) number");

        ch = getchar();
        if(strchr("mao", ch) != NULL){
                eatline();
                return ch;
        }
        else{
                eatline();
                return '\0';
        }
}

void use_calendar(int * days, int year){
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
                *days = 29;
        }
        else
                *days = 28;
}

void eatline(void){
        while(getchar() != '\n')
                continue;
}

int days(const struct month * months, int mon_num){
        
        int i = 0;
        int total = 0;
        while(months[i].num_month <= mon_num){
               total += months[i].days;
               i++;     //update
        }
        return total;
}

int ismonth_o(int mon){

       int i;

       for(i = 0; i < M_SIZE; i ++){
               if(mon == months[i].num_month){
                       return mon;
               }
       }

}

int ismonth_a(char input[]){
       
        int i;
        char copy[20];
        char copy_m[20];

        strcpy(copy, input);
        ToUpper(copy);
        
        for(i = 0; i < M_SIZE; i ++){

                strcpy(copy_m, months[i].abbrev);
                ToUpper(copy_m);
                if(!strcmp(copy_m, copy)){
                         return months[i].num_month; 
                }
        }
}

int ismonth(char input[]){
       
        int i;
        char copy[20];
        char copy_m[20];
        

        strcpy(copy, input);
        ToUpper(copy);
        
        for(i = 0; i < M_SIZE; i ++){

                strcpy(copy_m, months[i].monthname);
                ToUpper(copy_m);
                if(strcmp(copy_m, copy) == 0){
                        return months[i].num_month; 
                }
        }
}

void ToUpper(char *string){
        while(*string){
                *string = toupper(*string);
                string ++;
        }
}
