
#include <stdio.h>
#include "show_bytes.h"

int main(){
    printf("start ...\n");

    short a = -12345;
    unsigned short ua = (unsigned short)a;
    printf(" a = %d and ua = %u \n" , a, ua);

}

