/**
 * Author: Deean
 * Date: 2023-03-07 23:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maxProductDifference(int *nums, int numsSize) {
    int max1 = 0, max2 = 0, min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max1) {
            max2 = max1;
            max1 = nums[i];
        } else if (nums[i] > max2) {
            max2 = nums[i];
        }
        if (nums[i] < min1) {
            min2 = min1;
            min1 = nums[i];
        } else if (nums[i] < min2) {
            min2 = nums[i];
        }
    }
    return max1 * max2 - min1 * min2;
}

int main() {
    int nums[] = {5, 6, 2, 7, 4};
    int ans = maxProductDifference(nums, 5);
    printf("%d\n", ans);
    return 0;
}
