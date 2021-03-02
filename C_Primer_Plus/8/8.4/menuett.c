#include <stdio.h>

char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void){

        char choice;

        while((choice = get_choice()) != 'q'){

                switch(choice){

                        case 'a':
                                printf("buy low, sell high.\n");
                                break;
                        case 'b':
                                putchar('\a');
                                break;
                        case 'c':
                                count();
                                break;
                        default :
                                printf("program error!\n");
                                break;
                }
        }
        return 0;
}

char get_choice(void){

        printf("enter the letter of the choice:\n");
        printf("a. advice\t");
        printf("b. bell\n");
        printf("c. count\t");
        printf("q. quit\n");

        char ch;
        //char c;
        //ch = getchar();
        ch = get_first();
        
        while((ch < 'a' || ch > 'c') && ch != 'q'){
                printf("please respond with a, b, c or q.\n");
                
                //while((c = getchar()) != '\n')
                //        continue;
                
                //ch = getchar();
                //while((c = getchar()) != '\n')
                //        continue;
                ch = get_first();
        }
        return ch;
}

char get_first(void){

        char ch;
        ch = getchar();
        
        while(getchar() != '\n')
                continue;

        return ch;
}

int get_int(void){
        
        int input;
        char ch;

        while(scanf("%d", &input) != 1){
                /*处理整数输入错误后丢弃该输入行的所有剩余内容*/
                while((ch = getchar()) != '\n'){
                        putchar(ch);
                }

                printf(" is not an integer.\nplease enter an integer value, such as 25, -5, or 10: ");
        }

        return input;
}


void count(void){

        int n, i;
        printf("count how far. please enter a integer: ");
        n = get_int();

        for(i = 1; i <= n; i ++)
                printf("%d\n", i);

        /*运行count后输入 如3回车消除回车影响*/
        while(getchar() != '\n')
                continue;
}
