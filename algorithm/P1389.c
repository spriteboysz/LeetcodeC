/**
 * Author: Deean
 * Date: 2023-03-12 12:45
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *createTargetArray(int *nums, int numsSize, int *index, int indexSize, int *returnSize) {
    int *target = (int *) malloc(sizeof(int) * indexSize);
    int tail = -1;
    for (int i = 0; i < indexSize; ++i) {
        tail++;
        for (int j = tail; j > index[i]; j--) {
            target[j] = target[j - 1];
        }
        target[index[i]] = nums[i];
    }
    *returnSize = numsSize;
    return target;
}

int main() {
    int nums[] = {0, 1, 2, 3, 4};
    int index[] = {0, 1, 2, 2, 1};
    int n;
    int *ans = createTargetArray(nums, 5, index, 5, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
