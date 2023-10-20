/**
 * Author: Deean
 * Date: 2023-03-07 22:05
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int minOperations(int *nums, int numsSize) {
    int cnt = 0;
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i] <= nums[i - 1]) {
            cnt += nums[i - 1] + 1 - nums[i];
            nums[i] = nums[i - 1] + 1;
        }
    }
    return cnt;
}

int main() {
    int nums[] = {1, 5, 2, 4, 1};
    int ans = minOperations(nums, 5);
    printf("%d\n", ans);
    return 0;
}
