/**
 * Author: Deean
 * Date: 2023-03-05 23:15
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int *targetIndices(int *nums, int numsSize, int target, int *returnSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int *res = (int *) malloc(sizeof(int) * numsSize);
    for (int i = 0, j = 0; i < numsSize; ++i) {
        if (nums[i] == target) {
            res[j++] = i;
        }
        *returnSize = j;
    }
    return res;
}

int main() {
    int nums[] = {1, 2, 5, 2, 3};
    int n;
    int *ans = targetIndices(nums, 5, 2, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
