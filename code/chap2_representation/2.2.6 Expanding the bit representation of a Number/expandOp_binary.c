
#include <stdio.h>
#include <string.h>
#include "../show_binary.h"

/**
 * 基于show_binary.h提供的函数
 * 展示了signed and unsigned number扩展位数的方式，
 * 以二级制的形式展示，非常形象
 * 
*/
int main(){
    // 场景1 unsigned short -> unsigned int
    unsigned short us = 106;
    printf("unsigned short us : %d \n", us);
    show_short_binary(us);

    unsigned int ui = us;
    printf("unsigned int ui : %d \n", ui);
    show_int_binary(ui);


    // 场景2 signed short -> signed int 
    short ss = -12345;
    printf("unsigned short us : %d \n", ss);
    show_short_binary(ss);

    int si = ss;
    printf("unsigned int ui : %d \n", si);
    show_int_binary(si);

}