
#include <stdio.h>
#include <string.h>

typedef unsigned char *type_pointer;


void show_binary(type_pointer start, size_t len);
void charToBinary(unsigned char c, char *binary);
void show_int_binary(int x);
void show_short_binary(short x);
/**
 * 参考show_bytes.h
 * 以二进制的形式打印
*/
void show_binary(type_pointer start, size_t len){
    size_t i;
    for( i = 0; i < len; i++){
       char binary[10];
       /*
       * 这里要特别说明一下，为啥是start[len - 1 - i]
       * 整体来说，mac是litte-endian：从右往左读取bytes
       * 所以，如果按照0,1,2,...这种顺序打印的话，整个就反了
       * 比如12345，用二进制表示的正常顺序就是：
       *  00000000 00000000 00110000 00111001
       * 如果用0,1,2,...这种顺序打印的话，就变成了：
       * 00111001 00110000 00000000 00000000
       * 当然这么做兼容性不太好，但是目前就这么着吧
       */
       charToBinary(start[len - 1 - i], binary);
       printf(" %s", binary);
    }
    printf("\n");
}

void show_int_binary(int x){
    show_binary( (type_pointer) &x, sizeof(x));
}

void show_short_binary(short x){
    show_binary( (type_pointer) &x, sizeof(x));
}

/**
 * char转二进制
 * @param c  char : 比如'A'
 * @param binary 转换后的二进制表示，比如： "01000001"
*/
void charToBinary(unsigned char c, char *binary) {
    for (int i = 7; i >= 0; i--) {
        // 逐位检查
        binary[7 - i] = ((c >> i) & 1) ? '1' : '0';
    }
    binary[8] = '\0';
}