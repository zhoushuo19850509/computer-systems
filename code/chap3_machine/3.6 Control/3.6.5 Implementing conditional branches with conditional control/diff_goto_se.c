#include <stdio.h>
long lt_cnt = 0;
long gt_cnt = 0;

/**
 * 功能：goto风格的计算两个数据的差(绝对值)
 * 目的：为了说明if/else控制流编译成机器码之后的逻辑
 * 其实就是这种goto风格的
*/
long gotodiff_se(long x, long y){
    long result;
    if(x >= y){
        goto x_ge_y;
    }
    lt_cnt++;
    result = y - x;
    return result;
x_ge_y:
    gt_cnt++;
    result = x - y;
    return result;
}
