/**
 * Author: Deean
 * Date: 2023-03-09 23:59
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int getMaximumGenerated(int n) {
    if (n == 0) return 0;
    int nums[n + 1];
    nums[1] = 1;
    int maximum = 1;
    for (int i = 2; i <= n; ++i) {
        nums[i] = nums[i / 2] + i % 2 * nums[i / 2 + 1];
        maximum = fmax(maximum, nums[i]);
    }
    return maximum;
}

int main() {
    int ans = getMaximumGenerated(7);
    printf("%d\n", ans);
    return 0;
}
