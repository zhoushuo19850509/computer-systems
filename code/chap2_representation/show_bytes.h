#include <stdio.h>
#include <string.h>

/*
 * 这里定义一个数据类型：char指针，指向各种数据类型数据的地址
 * show_bytes()函数就通过这个指针指向的地址，遍历各种数据类型
*/
typedef unsigned char *type_pointer;

void show_bytes(type_pointer start, size_t len);
void show_int(int x);
void show_float(float x);
void show_pointer(void *x);

/* 
 * print any data type in byte (hex format)
 * @param start 指向该数据类型的指针
 * @param len 该数据类型的长度
 */
void show_bytes(type_pointer start, size_t len){
    size_t i;
    for( i = 0; i < len; i++){
        /**
         * 这里%x的意思是以16进制表示
         * %.2x的意思是每次循环展示两个16进制
         * 比如10 -> 0a
         *    16 -> 10
         * 意思就是每次循环展示8个字节的内容
         * 这正好契合了 type_pointer这个指针类型：*char
         * 思就是type_pointer这个指针每往前一步，都会读取一个字节(8bit)
         * 正好对应了这里%.2x的两个16进制
        */
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

//展示int类型数据，通过byte展示
void show_int(int x){
    printf("show int: %d \n", x);
    int mysize = sizeof(x);
    printf("size of int : %d \n" ,mysize);
    show_bytes( (type_pointer) &x, sizeof(x));
}

//展示 float 类型数据，通过byte展示
void show_float(float x){
    printf("show float : %f \n", x);
    int mysize = sizeof(x);
    printf("size of float : %d \n" ,mysize);
    show_bytes( (type_pointer) &x, sizeof(x));
}


//展示 pointer 类型数据，通过byte展示
void show_pointer(void *x){
    show_bytes( (type_pointer) &x, sizeof(void *));
}
