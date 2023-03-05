/**
 * Author: Deean
 * Date: 2023-03-05 19:22
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int findMiddleIndex(int *nums, int numsSize) {
    int sum = 0;
    for (int i = 0; i < numsSize; ++i) {
        sum += nums[i];
    }
    int left = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (2 * left + nums[i] == sum) {
            return i;
        }
        left += nums[i];
    }
    return -1;
}

int main() {
    int nums[] = {2, 3, -1, 8, 4};
    int ans = findMiddleIndex(nums, 5);
    printf("%d\n", ans);
    return 0;
}
