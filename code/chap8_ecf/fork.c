#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * 这个代码主要用于说明：
 * 如何通过fork()函数创建子进程
*/
int main(){
    printf("fork testing ...\n");

    pid_t pid;
    int x = 1;

    pid = fork(); // 创建一个子进程
    if(pid == 0){
        printf("child process: x = %d \n", ++x);
        exit(0);
    }

    printf("parent process: x = %d \n", --x);
    exit(0);

    

}

