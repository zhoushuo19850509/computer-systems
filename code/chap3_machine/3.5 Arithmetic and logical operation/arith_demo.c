#include <stdio.h>

long arith(long x, long y, long z);

/**
 * 这个代码对应： 3.5.4 discussion
 * 用来说明编译器是如何优化乘法的
*/
int main(){
    long a = 10;
    long b = 20;
    long c = 30;
    long result = arith(a, b, c);
    printf("result: %ld \n", result);

}

long arith(long x, long y, long z){
    long t1 = x ^ y;
    long t2 = z * 48;
    long t3  = t1 & 0x0F0F0F0F;
    long t4 = t2 - t3;
    return t4;
}
