#include <stdio.h>

int main(){
    printf("hello ... \n");

    int a = 19;
    
    // 打印int长度：4个字节
    int sizeInt = sizeof(a);
    printf("print integer %d \n", a);
    printf("print integer size:  %d \n", sizeInt);

    // 打印Pointer长度： 8个字节
    int* p ;
    p = &a;
    int sizePointer = sizeof(p);
    printf("print value of pointer: %d \n", *p);
    printf("print value of pointer: %d \n", sizePointer);


}