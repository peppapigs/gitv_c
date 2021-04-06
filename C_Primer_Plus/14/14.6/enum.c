#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define LEN     20

enum spectrum{
        red, orange, yellow, green, blue, violet
};

/*字符串数组*/
const char *colors[] = { "red", "orange", "yellow", "green", "blue", "violet" };


int main(void){

        char choice[LEN];
        enum spectrum color;
        bool color_is_found = false;

        puts("Enter a kind of color(Empty line to quit):");

        while(gets(choice) != NULL && choice[0] != '\0'){
                for(color = red; color <= violet; color ++){
                        if(!strcmp(choice, colors[color])){

                                color_is_found = true;
                                break;
                        }
                }

                /*for循环结束可能时color_is_found = true执行，也可能是循环结束未找到*/
                if(color_is_found == true){

                        /*枚举中的成员类似宏 red = 0*/
                        switch(color){

                                case red:
                                        puts("roses are red.");
                                        break;
                                case orange:
                                        puts("poppies are orange.");
                                        break;
                                case yellow:
                                        puts("sunflowers are yellow.");
                                        break;
                                case green:
                                        puts("grass are green.");
                                        break;
                                case blue:
                                        puts("bluebell are blue.");
                                        break;
                                case violet:
                                        puts("voilets are voilet.");
                                        break;
                                /*已经找到在color中，不设置default也可以*/
                        }
                }
                else{
                        printf("I don't know about the color %s(color=%d).\n",
                               choice, color);
                }

                /*for next to while*/
                color_is_found = false;

                puts("Next color, please(empty line to quit)");
        }

        printf("BYE!\n");
        return 0;
}
