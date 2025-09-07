#include <stdio.h>

void proc(long a1, long *a1p,
          int a2, int *a2p,
          short a3, short *a3p,
          char a4, char *a4p
);
long call_proc();

int main(){
    long result = call_proc();
    printf("result: %ld \n", result);
}

long call_proc(){
    long a1 = 11;
    int a2 = 22;
    short a3 = 33;
    char a4 = 44;
    proc(a1, &a1, a2, &a2, a3, &a3, a4, &a4);
    return (a1 + a2)*(a3 - a4);
}

void proc(long a1, long *a1p,
          int a2, int *a2p,
          short a3, short *a3p,
          char a4, char *a4p
){
    *a1p += a1;
    *a2p += a2;
    *a3p += a3;
    *a4p += a4;
}


