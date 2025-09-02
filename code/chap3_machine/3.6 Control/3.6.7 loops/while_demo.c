#include <stdio.h>

long fact_while(long n);

int main(){
    long n = 5;
    long result = fact_while(n);
    printf("result: %ld \n", result);

}

/**
 * 计算 1 * 2 * 3 * ... * n
*/
long fact_while(long n){
    long result = 1;
    while(n > 1){
        result *= n;
        n = n - 1;
    }
    return result;
}
