/**
 * Author: Deean
 * Date: 2023-03-07 21:32
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maxAscendingSum(int *nums, int numsSize) {
    int maximum = 0, i = 0;
    while (i < numsSize) {
        int curSum = nums[i++];
        while (i < numsSize && nums[i] > nums[i - 1]) {
            curSum += nums[i++];
        }
        maximum = fmax(maximum, curSum);
    }
    return maximum;
}

int main() {
    int nums[] = {10, 20, 30, 5, 10, 50};
    int ans = maxAscendingSum(nums, 6);
    printf("%d\n", ans);
    return 0;
}
