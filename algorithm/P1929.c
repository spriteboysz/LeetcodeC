/**
 * Author: Deean
 * Date: 2023-03-08 21:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *getConcatenation(int *nums, int numsSize, int *returnSize) {
    int *concatenation = (int *) malloc(sizeof(int) * numsSize * 2);
    for (int i = 0; i < numsSize; ++i) {
        concatenation[i] = nums[i];
        concatenation[i + numsSize] = nums[i];
    }
    *returnSize = 2 * numsSize;
    return concatenation;
}

int main() {
    int nums[] = {1, 3, 2, 1};
    int n;
    int *ans = getConcatenation(nums, 4, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", ans[i]);
    }
    return 0;
}
