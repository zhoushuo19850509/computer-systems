#include <stdio.h>

int main(){
    printf("hello ...\n");
    char a = 'a';
    // 10进制表示
    printf("%d \n", a);
    // 16进制表示
    printf("%.2x \n", a);

    int num = 10;
    printf("%d \n", num);
    printf("%d \n", num >> 1); // 右移一位除以2

    int n = 20;
    printf("%d \n", n << 1); // 左移一位乘以2
    
}