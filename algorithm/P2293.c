/**
 * Author: Deean
 * Date: 2023-03-05 15:58
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int minMaxGame(int *nums, int numsSize) {
    while (numsSize > 1) {
        numsSize /= 2;
        int new[numsSize];
        for (int i = 0; i < numsSize; ++i) {
            if (i % 2 == 0) {
                new[i] = fmin(nums[2 * i], nums[2 * i + 1]);
            } else {
                new[i] = fmax(nums[2 * i], nums[2 * i + 1]);
            }
        }
        memcpy(nums, new, sizeof(int) * numsSize);
    }
    return nums[0];
}

int main() {
    int nums[] = {1, 3, 5, 2, 4, 8, 2, 2};
    int ans = minMaxGame(nums, 8);
    printf("%d\n", ans);
    return 0;
}
