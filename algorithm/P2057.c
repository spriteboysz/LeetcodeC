/**
 * Author: Deean
 * Date: 2023-03-05 22:15
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int smallestEqual(int *nums, int numsSize) {
    for (int i = 0; i < numsSize; ++i) {
        if (i % 10 == nums[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int nums[] = {4, 3, 2, 1};
    int ans = smallestEqual(nums, 4);
    printf("%d\n", ans);
    return 0;
}
