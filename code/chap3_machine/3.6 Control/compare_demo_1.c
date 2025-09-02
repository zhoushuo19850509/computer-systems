#include <stdio.h>

int compare(long x, long y);

int main(){
    long a = 10;
    long b = 20;
    long result = compare(a, b);
    printf("result: %ld \n", result);

}

int compare(long x, long y){
    long t  = x - t;
    if(t > 0){
        return 1;
    }else{
        return 0;
    }
}
