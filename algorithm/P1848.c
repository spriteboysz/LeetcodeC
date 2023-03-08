/**
 * Author: Deean
 * Date: 2023-03-07 22:21
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int getMinDistance(int *nums, int numsSize, int target, int start) {
    int minimum = INT_MAX;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] == target) {
            minimum = fmin(minimum, abs(i - start));
        }
    }
    return minimum;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int ans = getMinDistance(nums, 5, 5, 3);
    printf("%d\n", ans);
    return 0;
}
