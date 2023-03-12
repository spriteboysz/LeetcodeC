/**
 * Author: Deean
 * Date: 2023-03-12 10:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int minStartValue(int *nums, int numsSize) {
    int accSum = 0, minimum = 0;
    for (int i = 0; i < numsSize; ++i) {
        accSum += nums[i];
        minimum = fmin(minimum, accSum);
    }
    return -minimum + 1;
}

int main() {
    int nums[] = {-3, 2, -3, 4, 2};
    int ans = minStartValue(nums, 5);
    printf("%d\n", ans);
    return 0;
}
