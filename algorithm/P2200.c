/**
 * Author: Deean
 * Date: 2023-03-06 23:30
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *findKDistantIndices(int *nums, int numsSize, int key, int k, int *returnSize) {
    int *num = (int *) malloc(sizeof(int) * 1000);
    int *ret = (int *) malloc(sizeof(int) * 1000);
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] == key) {
            num[cnt1++] = i;
        }
    }
    for (int i = 0; i < numsSize; ++i) {
        for (int j = 0; j < cnt1; ++j) {
            if (abs(i - num[j]) <= k) {
                ret[cnt2++] = i;
                break;
            }
        }
    }
    *returnSize = cnt2;
    return ret;
}

int main() {
    int nums[] = {3, 4, 9, 1, 3, 9, 5};
    int n;
    int *ans = findKDistantIndices(nums, 7, 9, 1, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
