/**
 * Author: Deean
 * Date: 2023-03-04 20:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int findClosestNumber(int *nums, int numsSize) {
    int minimum = INT_MAX, res = INT_MIN;
    for (int i = 0; i < numsSize; ++i) {
        if (abs(nums[i]) < minimum) {
            minimum = abs(nums[i]);
        }
    }
    for (int i = 0; i < numsSize; ++i) {
        if (abs(nums[i]) == minimum && nums[i] > res) {
            res = nums[i];
        }
    }
    return res;
}

int main() {
    int nums[] = {-4, -2, 1, 4, 8};
    int ans = findClosestNumber(nums, 5);
    printf("%d\n", ans);
    return 0;
}
