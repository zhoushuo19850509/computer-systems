#include <stdio.h>

/**
 * 这个demo用来说明unary 
 * 所谓的Unary operations，就是一元运算符，比如a++这种
 * 经过实践，gcc非常聪明（过于聪明了），为了提升效率，
 * 直接就在汇编码中展示计算好的结果了，没有展示预期的inc的操作符
*/
int main(){
    int a;
    a = 100;
    a++;
    printf("value of a: %d \n", a);
}