/**
 * Author: Deean
 * Date: 2023-03-11 16:16
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool kLengthApart(int *nums, int numsSize, int k) {
    int cnt = 0, i = 0;
    for (;;) {
        if (nums[i++] == 1) {
            break;
        } else {
            if (i == numsSize) return true;
        }
    }
    for (; i < numsSize; ++i) {
        if (nums[i] == 0) {
            cnt++;
            continue;
        }
        if (cnt < k) return false;
        cnt = 0;
    }
    return true;
}

int main() {
    int nums[] = {1, 0, 0, 0, 1, 0, 0, 1};
    int ans = kLengthApart(nums, 8, 2);
    printf("%d\n", ans);
    return 0;
}
