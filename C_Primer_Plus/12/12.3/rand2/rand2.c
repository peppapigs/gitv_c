static unsigned int next = 1;   /*seed*/

unsigned int rand1(void){
        next = next * 1103515245 + 12345;
        
        return (next/65535) % 32767;
}

void srand1(unsigned int seed){
        next = seed;
}
