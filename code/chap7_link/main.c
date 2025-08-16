

#include <stdio.h>

int array[5] = {1,2,3,4,5};
int sum(int *a, int n);

/**
 * 这个代码主要用于说明link原理
*/
int main(){
    printf("main testing ...");
    int result = sum(array, 5);
    printf("sum result: %d \n", result);

}

