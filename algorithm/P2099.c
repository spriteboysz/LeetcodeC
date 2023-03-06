/**
 * Author: Deean
 * Date: 2023-03-06 06:26
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return ((int *) b)[0] - ((int *) a)[0];
}

int cmpIndex(const void *a, const void *b) {
    return ((int *) a)[1] - ((int *) b)[1];
}

int *maxSubsequence(int *nums, int numsSize, int k, int *returnSize) {
    int sorted[numsSize][2];
    for (int i = 0; i < numsSize; ++i) {
        sorted[i][0] = nums[i];
        sorted[i][1] = i;
    }
    qsort(sorted, numsSize, sizeof(sorted[0]), cmp);
    qsort(sorted, k, sizeof(sorted[0]), cmpIndex);

    int *ans = (int *) malloc(sizeof(int) * k);
    for (int i = 0; i < k; ++i) {
        ans[i] = sorted[i][0];
    }
    *returnSize = k;
    return ans;
}

int main() {
    int nums[] = {-1, -2, 3, 4};
    int n;
    int *ans = maxSubsequence(nums, 5, 3, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
