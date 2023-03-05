/**
 * Author: Deean
 * Date: 2023-03-05 19:39
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maximumDifference(int *nums, int numsSize) {
    int maximum = -1;
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            maximum = fmax(maximum, nums[j] - nums[i]);
        }
    }
    return maximum > 0 ? maximum : -1;
}

int main() {
    int nums[] = {7, 1, 5, 4};
    int ans = maximumDifference(nums, 4);
    printf("%d\n", ans);
    return 0;
}
