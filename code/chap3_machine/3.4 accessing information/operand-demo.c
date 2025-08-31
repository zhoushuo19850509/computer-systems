#include <stdio.h>

#define FACTOR 5

int sum(int a, int b);

int main(){
    int a;
    a = 13;

    int b;
    b = 17;

    int c;
    c = sum(a, b);
    c = FACTOR * c;
    printf("c: %d \n", c);

    int *p;
    p = &c;
    printf("pointer value: : %d \n", *p);
}

int sum(int a, int b){
    int c;
    c = a + b;
    return c;
}
