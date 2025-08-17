#include <stdio.h>


/**
 * int 转binary
*/
int main() {
   int num, temp, i = 0;
   int arr[20];
   printf("请输入一个十进制数：\n");
   scanf("%d", &num);
   do {
       temp = num % 2;
       num = num / 2;
       arr[i++] = temp;
   } while (num != 0);
   for (int j = i - 1; j >= 0; j--) {
       printf("%d", arr[j]);
   }
   printf("\n");
   return 0;
}