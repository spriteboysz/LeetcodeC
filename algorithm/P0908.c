/**
 * Author: Deean
 * Date: 2023-03-17 22:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int smallestRangeI(int *nums, int numsSize, int k) {
    int maximum = INT_MIN, minimum = INT_MAX;
    for (int i = 0; i < numsSize; ++i) {
        maximum = fmax(maximum, nums[i]);
        minimum = fmin(minimum, nums[i]);
    }
    return fmax(0, maximum - minimum - 2 * k);
}

int main() {
    int nums[] = {1, 3, 6};
    int ans = smallestRangeI(nums, 3, 3);
    printf("%d\n", ans);
    return 0;
}
