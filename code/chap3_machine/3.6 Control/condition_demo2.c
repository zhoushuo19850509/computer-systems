#include <stdio.h>

int testEqual(int x, int y);
int main(){
    int a;
    int b;
    a = 0;
    b = -22;
    int c;
    c = testEqual(a, b);
    printf("value of c: %d \n", c);

}

int testEqual(int x, int y){
    int result;
    if(x == y){
        result = 1;
    }else{
        result = 0;
    }
    return result;
}

