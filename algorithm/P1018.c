/**
 * Author: Deean
 * Date: 2023-03-14 22:09
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool *prefixesDivBy5(int *nums, int numsSize, int *returnSize) {
    bool *ans = (bool *) malloc(sizeof(bool) * numsSize);
    int num = 0;
    for (int i = 0; i < numsSize; ++i) {
        num = (num * 2 + nums[i]) % 5;
        ans[i] = num == 0;
    }
    *returnSize = numsSize;
    return ans;
}

int main() {
    int nums[] = {0, 1, 1};
    int n;
    bool *ans = prefixesDivBy5(nums, 3, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
