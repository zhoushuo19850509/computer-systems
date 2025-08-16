// 对一个数组的元素进行累加
int sum(int *a, int n){
    int i, sum = 0;
    for(i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}