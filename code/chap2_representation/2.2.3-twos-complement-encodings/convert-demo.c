#include <stdio.h>
#include "show_binary.h"
/**
 * 演示signed nubmer（Two's-complementation表示方式）
 * 用二进制怎么表示
*/
int main(){
    short x = 12345;
    short nx = -x;
    short y = 53191;

    // 用二进制表示
    show_short_binary(x);
    show_short_binary(nx);
    show_short_binary(y);

}