/**
 * Author: Deean
 * Date: 2023-03-11 16:53
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maxProduct(int *nums, int numsSize) {
    int max1 = -1, max2 = -1;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] > max1) {
            max2 = max1;
            max1 = nums[i];
        } else if (nums[i] > max2) {
            max2 = nums[i];
        }
    }
    return (max1 - 1) * (max2 - 1);
}

int main() {
    int nums[] = {1, 5, 4, 5};
    int ans = maxProduct(nums, 4);
    printf("%d\n", ans);
    return 0;
}
