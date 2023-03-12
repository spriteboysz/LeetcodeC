/**
 * Author: Deean
 * Date: 2023-03-12 17:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *sumZero(int n, int *returnSize) {
    int *nums = (int *) malloc(sizeof(int) * n);
    *returnSize = n;
    int pos = 0;
    if (n % 2 == 1) {
        nums[pos++] = 0;
    }
    for (int i = 1; i <= n / 2; ++i) {
        nums[pos++] = i;
        nums[pos++] = -i;
    }
    return nums;
}

int main() {
    int n;
    int *ans = sumZero(4, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
