
#include <stdio.h>
#include "show_bytes.h"

int main(){
    printf("start ...\n");


    /**
     * signed short -> unsigned short
     * signed short如果是负数，转化为unsigned short之后，
     * 最高位的负数标志，可能会成为数据位
    */
    short a = -12345;
    unsigned short ua = (unsigned short)a;
    printf(" a = %d and ua = %u \n" , a, ua);

    /*
    * unsigned -> signed int
    * unsigned最高位如果是1，转化为siged之后，就会转为负数
    */
    unsigned u = 4294967295u;
    int tu = (int)u;
    printf(" u = %u and tu = %d \n" , u, tu);

}

