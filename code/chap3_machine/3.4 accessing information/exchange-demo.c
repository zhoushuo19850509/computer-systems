#include <stdio.h>

long exchange(long *xp, long y);
int main(){
    long a = 36;
    long *xp;
    xp = &a;
    long b = 77;

    long origin = exchange(xp, b);

    printf("value of a now: %ld \n", a);
    printf("origin value : %ld \n", origin);

}

/**
 * 用y替换指针xp指向的数据
 * 然后返回指针xp原来的数据
 * @param 指向long的指针
 * @param y
*/
long exchange(long *xp, long y){
    long x = *xp;
    *xp = y;
    return x;
}