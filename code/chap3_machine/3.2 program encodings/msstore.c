#include <stdio.h>

long mult2(long x, long y);
void multstore(long x, long y, long* dest);

int main(){
    printf("start ...");
    long d;
    multstore(2, 3, &d);
    printf(" 2 * 3 = %ld \n", d);
    return 0;
}

long mult2(long x, long y){
    return x * y;
}

void multstore(long x, long y, long* dest){
    long t = mult2(x, y);
    *dest = t;    
}

