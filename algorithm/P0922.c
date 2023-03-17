/**
 * Author: Deean
 * Date: 2023-03-17 22:46
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *sortArrayByParityII(int *nums, int numsSize, int *returnSize) {
    int *even = (int *) malloc(sizeof(int) * numsSize);
    int *odd = (int *) malloc(sizeof(int) * numsSize);
    int pos1 = 0, pos2 = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] % 2 == 0) {
            even[pos1++] = nums[i];
        } else {
            odd[pos2++] = nums[i];
        }
    }
    for (int i = 0; i < numsSize; i += 2) {
        nums[i] = even[--pos1];
        nums[i + 1] = odd[--pos2];
    }
    free(even);
    free(odd);
    *returnSize = numsSize;
    return nums;
}

int main() {
    int nums[] = {4, 2, 5, 7};
    int n;
    int *ans = sortArrayByParityII(nums, 4, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
