#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define M_SIZE      12

struct month{
        char monthname[10];
        char abbrev[4];
        int days;
        int num_month;
};

void ToUpper(char *string);
int days(const struct month * months, int mon_num);
int ismonth(const struct month * months, const char * input);

int main(void){

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

        char input[20];
        int total;
        int i;
        int mon_num;
        puts("please enter the month(empty line to quit):");

        while(gets(input) != NULL && input[0] != '\0'){

                if(mon_num = ismonth(months, input)){
                        total = days(months, mon_num);
                        printf("From January to %s total days: %d\n", input, total);
                        printf("\n Next month(empty line to quit):\n");
                }
                else{
                        printf("%s is not month, continue enter month(empty line to quit):\n", input);
                }
        }

        puts("\nBye!");
        return 0;
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

int ismonth(const struct month * months, const char * input){
       
        int i;
        char copy[20];
        char copy_m[20];

        strcpy(copy, input);
        ToUpper(copy);
        
        for(i = 0; i < M_SIZE; i ++){

                strcpy(copy_m, months[i].monthname);
                ToUpper(copy_m);
                if(!strcmp(copy_m, copy)){
                       return months[i].num_month; 
                       break;
                }
        }

        return 0;
}

void ToUpper(char *string){
        while(*string){
                *string = toupper(*string);
                string ++;
        }
}
