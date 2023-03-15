/**
 * Author: Deean
 * Date: 2023-03-15 20:43
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int largestSumAfterKNegations(int *nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 0; k > 0 && i < numsSize && nums[i] < 0; i++, k--) {
        nums[i] = -nums[i];
    }
    qsort(nums, numsSize, sizeof(int), cmp);

    if (k % 2) {
        nums[0] = -nums[0];
    }

    int largest = 0;
    for (int i = 0; i < numsSize; ++i) {
        largest += nums[i];
    }
    return largest;
}

int main() {
    int nums[] = {4, 2, 3};
    int ans = largestSumAfterKNegations(nums, 3, 1);
    printf("%d\n", ans);
    return 0;
}
