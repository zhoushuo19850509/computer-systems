#include <stdio.h>

int main(){
    printf("hello ...\n");
    int a = 53191;
    short b = (short)a; // int -> short  truncatd
    int c = b;  // short -> int not truncated
    printf("print truncated short ... %d \n", b);
    printf("print int ... %d \n", c);

    int sizeInt = sizeof(int);
    int sizeShort = sizeof(short);
    printf("print int size... %d \n", sizeInt);
    printf("print short size... %d \n", sizeShort);
}


