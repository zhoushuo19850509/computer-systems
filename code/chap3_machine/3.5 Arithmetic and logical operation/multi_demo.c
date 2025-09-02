#include <stdio.h>

long multi(int x, int y);

/**
 * 这个代码对应： 3.5.4 discussion
 * 用来说明编译器是如何优化乘法的
*/
int main(){
    int a = 10;
    int b = 20;
    int c = multi(a, b);
    printf("result: %d \n", c);

}

long multi(int x, int y){
    int z = x * y;
    return z;
}
