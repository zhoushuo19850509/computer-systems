#include <stdio.h>
#include "../show_binary.h"

float sum_elements(float s[], unsigned length );

/**
 * 演示demo-bug1内存溢出的结果，解释了内存溢出的原理
*/
int main(){

    unsigned a = 0;
    int b = 0;
    if(b <= a - 1){
        printf("1 >>> \n");
    }else{
        printf("2 >>> \n");
    }
    printf("a - 1 : %u \n", a -1);
    show_int_binary(a - 1);


    float s[5];
    s[0] = 1;
    s[1] = 1;
    s[2] = 1;
    s[3] = 1;
    s[4] = 1;
    float result = sum_elements(s, 0);
    printf("result: %f \n", result);
}

float sum_elements(float s[], unsigned length ){
    int i;
    float result = 0;

    for(i = 0; i <= length -1; i++){
        // printf("loop: %d \n" , i);
        result += s[i];
    }
    return result;
}