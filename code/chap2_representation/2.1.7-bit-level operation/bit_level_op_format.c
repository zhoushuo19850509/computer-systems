#include <stdio.h>

void charToBinary(char c, char *binary);
void print_in_format(unsigned char ee);
void print_in_format_op_and(unsigned char ee1, unsigned char ee2);
void print_in_format_op_or(unsigned char ee1, unsigned char ee2);
/**
 * 
 * @功能
 * 本代码是bit_level_op的升级版，不仅打印了十六进制取反、按位与、按位或的结果
 * 还通过二进制的形式，展示了处理过程
 * 
 * @目标
 * 这个代码目的是为了说明单字节16进制的取反、按位与、按位或的处理过程
 * 
 * @展示结果
 * C expression   binary expression  binary result  Hexadecimal result
 * ~0x41          ~[01000001]        ~[10111110]      ~0xbe
 * ~0x00          ~[00000000]        ~[11111111]      ~0xff
 * 0x69 & 0x55    [01101001]&[01010101]   [01000001]   0x41
 * 0x69 | 0x55    [01101001]|[01010101]   [01111101]   0x7d
*/
int main(){

    char binary[10];

    printf("C expression   binary expression  binary result  Hexadecimal result  \n");

    print_in_format(0x41);

    print_in_format(0x00);

    print_in_format_op_and(0x69, 0x55);

    print_in_format_op_or(0x69, 0x55);

    return 0;
}

/**
 * 输入一个char，然后对这个char进行取反，
 * 不仅要展示取反的结果，还要通过二进制展示取反的过程
 *  比如'A' 以16进制表示为： 0x41
 * 
 * 打印：
 * C expression   binary expression  binary result  Hexadecimal result
 * ~0x41          ~[01000001]        ~[10111110]      ~0xbe
 * @param char  比如'A' 以16进制表示为： 0x41
*/
void print_in_format(unsigned char ee){
    char binary[10];
    printf("~0x%.2x   ", ee);
    charToBinary(ee, binary);
    printf("       ~[%s] ", binary);
    unsigned char ee_result = ~ee;
    charToBinary(ee_result, binary);
    printf("       ~[%s] ", binary);
    printf("     ~0x%.2x \n", ee_result);
    
}

/**
 * 展示两个十六进制按位与的过程和结果
 * 
 * C expression   binary expression  binary result  Hexadecimal result
 * 0x69 & 0x55    [01101001]&[01010101]   [01000001]   0x41
 * 
 * @param 第一个十六进制数据 比如0x69
 * @param 第二个十六进制数据 比如0x55
*/
void print_in_format_op_and(unsigned char ee1, unsigned char ee2){
    char binary1[10];
    char binary2[10];
    char binary_result[10];
    printf("0x%.2x & 0x%.2x", ee1, ee2);
    charToBinary(ee1, binary1);
    charToBinary(ee2, binary2);
    printf("    [%s]&[%s]", binary1, binary2);
    unsigned char ee_result = ee1 & ee2;
    charToBinary(ee_result, binary_result);
    printf("   [%s] ", binary_result);
    printf("  0x%.2x \n", ee_result);
}


/**
 * 展示两个十六进制按位或的过程和结果
 * 
 * C expression   binary expression  binary result  Hexadecimal result
 * 0x69 & 0x55    [01101001]|[01010101]   [01111101]   0x7d
 * 
 * @param 第一个十六进制数据 比如0x69
 * @param 第二个十六进制数据 比如0x55
*/
void print_in_format_op_or(unsigned char ee1, unsigned char ee2){
    char binary1[10];
    char binary2[10];
    char binary_result[10];
    printf("0x%.2x | 0x%.2x", ee1, ee2);
    charToBinary(ee1, binary1);
    charToBinary(ee2, binary2);
    printf("    [%s]|[%s]", binary1, binary2);
    unsigned char ee_result = ee1 | ee2;
    charToBinary(ee_result, binary_result);
    printf("   [%s] ", binary_result);
    printf("  0x%.2x \n", ee_result);
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

