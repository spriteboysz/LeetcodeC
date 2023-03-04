/**
 * Author: Deean
 * Date: 2023-03-04 16:25
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int findMaxK(int *nums, int numsSize) {
    int hash[2001] = {0};
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < 0) {
            hash[1000 - nums[i]]++;
        } else {
            hash[nums[i]]++;
        }
    }
    for (int i = 1000; i >= 0; i--) {
        if (hash[i] && hash[1000 + i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int nums[] = {-1, 10, 6, 7, -7, 1};
    int ans = findMaxK(nums, 6);
    printf("%d\n", ans);
    return 0;
}
