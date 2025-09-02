#include <stdio.h>

/**
 * 这段代码会出现test 指令
*/
int main(){
    int a;
    int b;
    a = 0;
    int i;
    for(i =0; i < 11; i++){
        a += 2;
    }
    b = -22;
    int c;
    c = a + b;
    printf("value of c: %d \n", c);

}

