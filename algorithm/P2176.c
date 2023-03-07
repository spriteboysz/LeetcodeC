/**
 * Author: Deean
 * Date: 2023-03-06 22:54
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countPairs(int *nums, int numsSize, int k) {
    int cnt = 0;
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] == nums[j] && (i * j) % k == 0) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int nums[] = {3, 1, 2, 2, 2, 1, 3};
    int ans = countPairs(nums, 7, 2);
    printf("%d\n", ans);
    return 0;
}
