#include <stdio.h>

long fact_for(long n);

int main(){
    long n = 5;
    long result = fact_for(n);
    printf("result: %ld \n", result);

}

/**
 * 计算 1 * 2 * 3 * ... * n
*/
long fact_for(long n){
    long result = 1;
    int i;
    for(i = 2; i <=n; i++){
        result *= i;
    }
    return result;
}
