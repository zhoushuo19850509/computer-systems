#include <stdio.h>

void charToBinary(char c, char *binary);

/**
 * 各种进制的转换
*/
int main(){
    // 单个字节的转换
    char a = 'A';
    
    // 以char形式展示
    printf("int char: %c \n", a);
    // 以decimal形式展示 参考ascII
    printf("in decimal: %d \n", a);
    // 以十六进制展示
    printf("in hexadecimal: 0x%.2x \n", a);
    // 以八进制展示
    printf("in octal: 0%o \n", a);
    // 以二进制表示
    char binary[10];
    charToBinary(a, binary);
    printf("in binary: 0b%s \n", binary);

}

/**
 * char转二进制
 * @param c  char : 比如'A'
 * @param binary 转换后的二进制表示，比如： "01000001"
*/
void charToBinary(char c, char *binary) {
    for (int i = 7; i >= 0; i--) {
        // 逐位检查
        binary[7 - i] = ((c >> i) & 1) ? '1' : '0';
    }
    binary[8] = '\0';
}