#include <stdio.h>

/**
 * 这个demo用来说明unary 
 * 所谓的Unary operations，就是一元运算符，比如a++这种
 * 经过实践，我们版本的gcc编译后的汇编语言，没有展示预期的inc的操作符
*/
int main(){
    int a;
    a = 100;

    int i;
    for(i = 0; i < 100; i++){
        a++;
        printf("value of a: %d \n", a);
    }
}