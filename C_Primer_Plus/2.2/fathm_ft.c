/*
 *  fathoms convert to feet
 */

#include <stdio.h>


int main(void)
{
    int feet, fathoms;

    fathoms = 2;

    feet = 6 * fathoms;

    printf("there is %d feet in %d fathoms\n", feet, fathoms);
    return 0;
} 
