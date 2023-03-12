/**
 * Author: Deean
 * Date: 2023-03-12 11:15
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) b - *(int *) a;
}

int *minSubsequence(int *nums, int numsSize, int *returnSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int sum = 0;
    for (int i = 0; i < numsSize; ++i) {
        sum += nums[i];
    }
    int pos = 0, accSum = 0;
    for (int i = 0; i < numsSize; ++i) {
        accSum += nums[i];
        pos++;
        if (sum - accSum < accSum) {
            break;
        }
    }
    *returnSize = pos;
    return nums;
}

int main() {
    int nums[] = {4, 4, 7, 6, 7};
    int n;
    int *ans = minSubsequence(nums, 5, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
