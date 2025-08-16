
#include <stdio.h>
#include <string.h>
#include "show_bytes.h"

int main(){
    // 场景1 unsigned short -> unsigned int
    unsigned short us = 106;
    printf("unsigned short us : %d \n", us);
    show_bytes( (type_pointer) &us, sizeof(us));

    unsigned int ui = us;
    printf("unsigned int ui : %d \n", ui);
    show_bytes( (type_pointer) &ui, sizeof(ui));


    // 场景2 signed short -> signed int 
    short ss = -12345;
    printf("unsigned short us : %d \n", ss);
    show_bytes( (type_pointer) &ss, sizeof(ss));

    int si = ss;
    printf("unsigned int ui : %d \n", si);
    show_bytes( (type_pointer) &si, sizeof(si));

}