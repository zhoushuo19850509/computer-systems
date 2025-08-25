#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t);
int main(){
    printf("start compare string ...\n");
    char *a = "hello";
    char *b = "hi";
    int result = strlonger(a, b);
    printf("result: %d\n", result);
}

int strlonger(char *s, char *t){
    return strlen(s) - strlen(t) > 0;
}
