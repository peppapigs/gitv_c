static unsigned int next = 1;   /*seed*/

unsigned int rand0(void){
        next = next * 1103515245 + 12345;
        
        return (next/65535) % 32767;
}
