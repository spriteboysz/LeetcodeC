/**
 * Author: Deean
 * Date: 2023-03-07 23:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool canBeIncreasing(int *nums, int numsSize) {
    int cnt = 0;
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i - 1] >= nums[i]) {
            if (i > 1 && nums[i] <= nums[i - 2]) {
                nums[i] = nums[i - 1];
            }
            cnt++;
        }
    }
    return cnt <= 1;
}

int main() {
    int nums[] = {1, 2, 10, 5, 7};
    int ans = canBeIncreasing(nums, 5);
    printf("%d\n", ans);
    return 0;
}
