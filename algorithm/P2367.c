/**
 * Author: Deean
 * Date: 2023-03-05 17:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int arithmeticTriplets(int *nums, int numsSize, int diff) {
    int cnt = 0;
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[j] - nums[i] != diff) continue;
            for (int k = 0; k < numsSize; ++k) {
                if (nums[k] - nums[j] == diff) {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main() {
    int nums[] = {0, 1, 4, 6, 7, 10};
    int ans = arithmeticTriplets(nums, 6, 3);
    printf("%d\n", ans);
    return 0;
}
