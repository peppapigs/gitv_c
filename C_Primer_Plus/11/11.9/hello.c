#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

        int i;
        int time;

        if(argc < 2 || (time = atoi(argv[1])) < 1){

                printf("time: %d\n", time);
                printf("Usage: %s + positive-number\n", argv[0]);
        } 
        else
                for(i = 0; i < time; i ++)
                        puts("hello! good looking!");
        return 0;
}
