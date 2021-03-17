#include <stdio.h>


int strlen(const char * string){
        
        int count = 0;
        while(*string ++){

                count ++;
        }
        return count;
}
