/**
 * Author: Deean
 * Date: 2023-03-05 19:25
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countQuadruplets(int *nums, int numsSize) {
    int cnt = 0;
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            for (int k = j + 1; k < numsSize; ++k) {
                for (int l = k + 1; l < numsSize; ++l) {
                    if (nums[i] + nums[j] + nums[k] == nums[l]) {
                        cnt++;
                    }
                }
            }
        }
    }
    return cnt;
}

int main() {
    int nums[] = {1, 1, 1, 3, 5};
    int ans = countQuadruplets(nums, 5);
    printf("%d\n", ans);
    return 0;
}
