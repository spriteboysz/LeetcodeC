/**
 * Author: Deean
 * Date: 2023-03-06 23:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countHillValley(int *nums, int numsSize) {
    int cnt = 0;
    for (int i = 0; i < numsSize;) {
        int left = i, v = nums[left];
        while (i < numsSize && nums[i] == v) {
            i++;
        }
        if (left > 0 && i < numsSize && ((nums[left - 1] < v) == (v > nums[i]))) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int nums[] = {2, 4, 1, 1, 6, 5};
    int ans = countHillValley(nums, 6);
    printf("%d\n", ans);
    return 0;
}
