/**
 * Author: Deean
 * Date: 2023-03-11 16:58
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *shuffle(int *nums, int numsSize, int n, int *returnSize) {
    int *ret = (int *) malloc(sizeof(int) * numsSize);
    for (int i = 0; i < n; ++i) {
        ret[i * 2] = nums[i];
        ret[i * 2 + 1] = nums[i + n];
    }
    *returnSize = numsSize;
    return ret;
}

int main() {
    int nums[] = {2, 5, 1, 3, 4, 7};
    int n;
    int *ans = shuffle(nums, 6, 3, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
