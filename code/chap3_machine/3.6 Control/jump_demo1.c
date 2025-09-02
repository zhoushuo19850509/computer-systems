#include <stdio.h>

long compare(long x, long y);

/*
 * 这段代码验证指令： jl/jg
*/
int main(){
    long a = 10;
    long b = 20;
    long result = compare(a, b);
    printf("result: %ld \n", result);

}

long compare(long x, long y){
    long z;
    if(x > y){
        z = x;
    }else if(x < y){
        z = y;
    }else{
        return 0;
    }
}
