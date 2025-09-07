#include <stdio.h>

long P(long x, long y);
long Q(long z);

int main(){
    long x = 11;
    long y = 22;
    long result = P(x, y);
    printf("result: %ld \n", result);
}

long P(long x, long y){
    long u = Q(x);
    long v = Q(y);
    return u + v;
}

long Q(long z){
    return z * z;
}
