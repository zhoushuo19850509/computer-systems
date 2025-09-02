#include <stdio.h>

/**
 * 这个demo用来说明binary operation
 * 所谓的Binary operations，就是类似这种： a += 10;
 * 经过实践，gcc非常聪明（过于聪明了），为了提升效率，
 * 如果你只是操作，gcc直接就在汇编码中展示计算好的结果了
 * 只有像本代码中这样多次操作，才会展示操作符：ADD
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