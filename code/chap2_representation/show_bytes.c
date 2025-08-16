#include <stdio.h>
#include <string.h>
#include "show_bytes.h"

int main(){
    printf("start show bytes format... \n");

    //  0a 00 00 00
    // mac操作系统：big-endian
    int i = 12345;
    printf(">>>>>>>>>>>>show_int \n");
    show_int(i);

    //  00 e4 40 46
    float f = 12345.0;
    printf(">>>>>>>>>>>>show_float \n");
    show_float(f);

    //  4c 17 d3 b8 f7 7f 00 00
    // mac 64位系统
    int* p ;
    p = &i;
    printf(">>>>>>>>>>>>show_pointer \n");
    show_pointer(p);

    
    char *s = "hello";
    printf("show string : %s \n", s);
    printf(">>>>>>>>>>>>show_string \n");
    show_bytes((type_pointer)s, strlen(s));

    // 展示补码
    short x1 = 12345;
    short nx1 = -12345;
    printf(">>>>>>>>>>>>show positive num : \n");
    show_int(x1);
    printf(">>>>>>>>>>>>show negative num : \n");
    show_int(nx1);

}


