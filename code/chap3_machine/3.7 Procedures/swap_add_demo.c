
#include <stdio.h>

long swap_add(long *xp, long *yp);
long caller();

int main(){
    long result = caller();
    printf("result: %ld \n", result);
}

/**
 * 交换两个指针指向的元素，并返回两个元素之和
*/
long swap_add(long *xp, long *yp){
    long x = *xp;
    long y = *yp;
    *xp = y;
    *yp = x;
    return x + y;
}

/**
 * 调用swap_add
*/
long caller(){
    long arg1  = 534;
    long arg2 = 1057;
    long sum = swap_add(&arg1, &arg2);
    long diff = arg1 - arg2;
    return sum * diff;
}

