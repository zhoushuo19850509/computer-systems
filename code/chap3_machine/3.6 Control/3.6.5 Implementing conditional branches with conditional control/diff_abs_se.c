#include <stdio.h>

long lt_cnt = 0;
long gt_cnt = 0;

/**
 * 功能：计算两个数据的差(绝对值)
 * 目的：为了说明if/else控制流编译成机器码之后的形式
*/
long absdiff_se(long x, long y){
    long result;
    if(x < y){
        lt_cnt++;
        result = y - x;
    }else{
        gt_cnt++;
        result = x - y;
    }
    return result;
}
