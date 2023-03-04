/**
 * Author: Deean
 * Date: 2023-03-04 13:38
 * FileName: algorithm
 * Description: 2485. 找出中枢整数
 */

#include "..\common\leetcode.h"

int pivotInteger(int n) {
    double sum = n * (n + 1) / 2;
    int x = (int) sqrt(sum);
    return x * x == sum ? x : -1;
}

int main() {
    int ans = pivotInteger(8);
    printf("%d\n", ans);
    return 0;
}
