#include <stdio.h>

long fact_do(long n);

int main(){
    long n = 100;
    long result = fact_do(n);
    printf("result: %ld \n", result);

}

/**
 * 计算 1 + 2 + 3 + ... + n
*/
long fact_do(long n){
    long result = 1;
    do{
        result += n;
        n = n - 1;
    }while(n > 1);
    return result;
}

