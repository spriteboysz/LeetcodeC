/**
 * Author: Deean
 * Date: 2023-03-11 17:18
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *runningSum(int *nums, int numsSize, int *returnSize) {
    int sum = 0;
    for (int i = 1; i < numsSize; ++i) {
        sum = nums[i - 1];
        nums[i] += sum;
    }
    *returnSize = numsSize;
    return nums;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int n;
    int *ans = runningSum(nums, 4, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
