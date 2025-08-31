#include <stdio.h>

/**
 * 这个demo用来说明 operation
 * 所谓的Binary operations，就是类似这种： a += 10;
 * 经过实践，gcc非常聪明（过于聪明了），为了提升效率，
 * 如果你只是操作，gcc直接就在汇编码中展示计算好的结果了
 * 只有像本代码中这样循环左移，才会展示左移的汇编语言操作符：SAL
*/
int main(){
    int x = 17;
    int y = 19;

    int i;
    for(i = 0; i < 100; i++){
        x += y;
        printf("value of x: %d \n", x);
    }
}