/**
 * Author: Deean
 * Date: 2023-03-05 19:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countKDifference(int *nums, int numsSize, int k) {
    int cnt = 0;
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (abs(nums[i] - nums[j]) == k) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int nums[] = {1, 2, 2, 1};
    int ans = countKDifference(nums, 4, 1);
    printf("%d\n", ans);
    return 0;
}
