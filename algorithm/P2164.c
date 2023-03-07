/**
 * Author: Deean
 * Date: 2023-03-06 22:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *sortEvenOdd(int *nums, int numsSize, int *returnSize) {
    for (int i = 0; i < numsSize; i += 2) {
        for (int j = i; j < numsSize; j += 2) {
            if (nums[i] >= nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    for (int i = 1; i < numsSize; i += 2) {
        for (int j = i; j < numsSize; j += 2) {
            if (nums[i] <= nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    *returnSize = numsSize;
    return nums;
}

int main() {
    int nums[] = {4, 1, 2, 3};
    int n;
    int *ans = sortEvenOdd(nums, 4, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
