

#include <stdio.h>

long rfact(long n);
int main(){
    long n = 5;
    long result = rfact(n);
    printf("result: %ld \n", result);

}

long rfact(long n){
    if(n <= 1){
        return 1;
    }else{
        return n * rfact(n - 1);
    }
}
