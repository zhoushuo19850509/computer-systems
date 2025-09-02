#include <stdio.h>

/**
 * 这个demo用来说明shift operation
 * 通过左移，实现2的N次方相乘
 * 经过实践，gcc非常聪明（过于聪明了），为了提升效率，
 * 如果你只是左移一次，gcc直接就在汇编码中展示计算好的结果了
 * 只有像本代码中这样循环左移，才会展示左移的汇编语言操作符：SAL
*/
int main(){
    int a;

    a = 3;

    int i;
    for(i = 0; i < 100; i++){
        a = a << 3;
        printf("value of a: %d \n", a);
    }
}