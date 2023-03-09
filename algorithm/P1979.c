/**
 * Author: Deean
 * Date: 2023-03-08 23:11
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int findGCD(int *nums, int numsSize) {
    int min = nums[0], max = nums[0];
    for (int i = 0; i < numsSize; ++i) {
        min = fmin(min, nums[i]);
        max = fmax(max, nums[i]);
    }

    int n = max % min;
    while (max % min) {
        max = min;
        min = n;
        n = max % min;
    }
    return min;
}

int main() {
    int nums[] = {2, 5, 6, 9, 10};
    int ans = findGCD(nums, 5);
    printf("%d\n", ans);
    return 0;
}
