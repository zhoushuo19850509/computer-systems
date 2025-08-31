#include <stdio.h>
#include <math.h>

int main(){
    float f = 3.14;
    double d = 6.78;

    /*
     * floating point number 占据4个字节
    */
    printf("size of float point number: %lu \n", sizeof(float));
    printf("size of double precision float point number: %lu \n", sizeof(double));


    /**
     * C语言打印一个floating point number
     * 1. ".4"表示小数点后面保留4位小数
    */
    printf("float number: %.4f \n", f);
}