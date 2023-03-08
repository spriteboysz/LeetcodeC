/**
 * Author: Deean
 * Date: 2023-03-07 22:01
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int arraySign(int *nums, int numsSize) {
    int negative = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] == 0) return 0;
        if (nums[i] < 0) negative++;
    }
    return negative % 2 == 0 ? 1 : -1;
}

int main() {
    int nums[] = {-1, -2, -3, -4, 3, 2, 1};
    int ans = arraySign(nums, 7);
    printf("%d\n", ans);
    return 0;
}
