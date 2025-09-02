#include <stdio.h>

/**
 * 这段代码会出现test 指令:
 * 
 * testl   %ebx, %ebx
*/
int main(){
    int a;
    int i;
    a = 0;
    for(i =0; i < 100; i++){
        a += i * i;
    }
    int t;
    t = a % 10;
    
    printf("value of a: %d \n", a);
    printf("value of t: %d \n", t);
    if(t == 0){
        printf("hi... \n");
    }else{
        printf("hello... \n");
    }
    

}

