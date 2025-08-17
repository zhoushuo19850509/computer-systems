#include <stdio.h>

int main(){
    printf("int -> hexadecimal \n");
    int a = 65;
    printf("decimal: %d \n", a);
    printf("hexadecimal: 0x%.2x \n", a);

    printf("hexadecimal -> int \n");
    int b = 0x41;
    printf("int: %d \n", b);

    printf("%.2x \n", ~0x41);

    char aa = 0x41;
    char bb = ~aa; // 取反
    printf("%lu \n", sizeof(aa));
    printf("0x%.2x \n", aa);


    int cc = 0177;
    printf("%d \n", cc);

    unsigned char dd = 0b01000001;
    printf("%c \n", dd);
    printf("0x%.2x \n", dd);

    unsigned char ee = ~(0b01000001);
    printf("0x%.2x \n", ee);

    unsigned char ff = 0x00;
    unsigned char gg = ~ff;
    printf("0x%.2x \n", gg);

    unsigned char hh = 0x69 & 0x55;
    printf("0x%.2x \n", hh);

    unsigned char ii = 0x69 | 0x55;
    printf("0x%.2x \n", ii);


    

    return 0;
}