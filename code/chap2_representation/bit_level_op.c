#include <stdio.h>


/**
 * 
*/
int main(){

    unsigned char ee = ~0x41;
    printf("0x%.2x \n", ee);

    unsigned char gg = ~0x00;
    printf("0x%.2x \n", gg);

    unsigned char hh = 0x69 & 0x55;
    printf("0x%.2x \n", hh);

    unsigned char ii = 0x69 | 0x55;
    printf("0x%.2x \n", ii);
    
    return 0;
}