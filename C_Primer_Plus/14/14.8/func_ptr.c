#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LEN     81

void ToUpper(char *string);
void ToLower(char *string);
void Transpose(char *string);
void Dummy(char *string);
void show(void (*pf)(char *string), char *string);
char showmenu(void);
void eatline(void);

int main(void){

        char choice;
        char line[LEN];
        char copy[LEN];

        /*使用函数指针作操作*/
        void (*pfun)(char *string);

        puts("Enter a string(empty line to quit):");

        while(gets(line) != NULL && line[0] != '\0'){

                while( (choice = showmenu()) != 'n'){

                        switch(choice){
                                
                                case 'u': pfun = ToUpper;    break;
                                case 'l': pfun = ToLower;    break;
                                case 't': pfun = Transpose;  break;
                                case 'o': pfun = Dummy;      break;
                        }

                        /*不操作原数据，使用备份*/
                        strcpy(copy, line);
                        show(pfun, copy);
                }

                puts("Enter a string(empty line to quit):");
        }

        puts("Bye!");
        return 0;
}


void ToUpper(char *string){
        while(*string){
                *string = toupper(*string);
                string ++;
        }
}
void ToLower(char *string){
        while(*string){
                *string = tolower(*string);
                string ++;
        }
}
/*大小写转换*/
void Transpose(char *string){

        while(*string){
                if(islower(*string)){
                        *string = toupper(*string);
                
                }
                else{
                        *string = tolower(*string);
                }

                string ++;
        }
}
void Dummy(char *string){
        /*do nothing*/
}

void show(void (*pf)(char *string), char *string){
        
        //printf("string: %s\n", string);
        (*pf)(string);
        puts(string);
}

char showmenu(void){

        //enum choice {'u', 'l', 't', 'o', 'n'};  解决字符是否在可选字符集合的方法二
        char ans;
        puts("Enter menu choice:");
        puts("u) uppercase         l) lowercase");
        puts("t) transposed case   o) original case");
        puts("n) next string");

        ans = getchar();
        ans = tolower(ans);

        /*清空行缓冲区输入冗余*/
        eatline();
        /*判断字符: strchr()检查字符串中是否存在所选字符的绝佳反用方法*/
        while(strchr("ulton", ans) == NULL){
                puts("please enter u, l, t, o or n:");
                ans = tolower(getchar());
                eatline();
        }

        return ans;
        
}

void eatline(void){
        while(getchar() != '\n'){
                continue;
        }
}
