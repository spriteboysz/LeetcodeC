/**
 * Author: Deean
 * Date: 2023-03-15 22:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MAX_VAL 10001

int repeatedNTimes(int *nums, int numsSize) {
    int count[MAX_VAL] = {0};
    for (int i = 0; i < numsSize; ++i) {
        count[nums[i]]++;
        if (count[nums[i]] == numsSize / 2) {
            return nums[i];
        }
    }
    return -1;
}

int main() {
    int nums[] = {5, 1, 5, 2, 5, 3, 5, 4};
    int ans = repeatedNTimes(nums, 8);
    printf("%d\n", ans);
    return 0;
}
