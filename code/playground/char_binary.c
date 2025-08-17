#include <stdio.h>

// 将char类型转换为二进制字符串


void charToBinary(char c, char *binary) {


    for (int i = 7; i >= 0; i--) {
        // 逐位检查
        binary[7 - i] = ((c >> i) & 1) ? '1' : '0';
    }
    binary[8] = '\0';
}

int main() {
    char c = 'A'; // 例如字符'A'
    char binary[10];
    charToBinary(c, binary);
    printf("字符 %c 的二进制表示为: %s \n", c, binary);
    return 0;
}