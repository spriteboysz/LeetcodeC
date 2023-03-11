/**
 * Author: Deean
 * Date: 2023-03-11 19:09
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int numIdenticalPairs(int *nums, int numsSize) {
    int cnt = 0;
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] == nums[j]) cnt++;
        }
    }
    return cnt;
}

int main() {
    int nums[] = {1, 2, 3, 1, 1, 3};
    int ans = numIdenticalPairs(nums, 6);
    printf("%d\n", ans);
    return 0;
}
