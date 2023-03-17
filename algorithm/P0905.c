/**
 * Author: Deean
 * Date: 2023-03-17 22:13
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"


int *sortArrayByParity(int *nums, int numsSize, int *returnSize) {
    int *even = (int *) malloc(sizeof(nums) * numsSize);
    int *odd = (int *) malloc(sizeof(nums) * numsSize);
    int pos1 = 0, pos2 = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] % 2 == 0) {
            even[pos1++] = nums[i];
        } else {
            odd[pos2++] = nums[i];
        }
    }
    for (int i = pos1; i < numsSize; ++i) {
        even[i] = odd[i - pos1];
    }
    free(odd);
    *returnSize = numsSize;
    return even;
}

int main() {
    int nums[] = {3, 1, 2, 4};
    int n;
    int *ans = sortArrayByParity(nums, 4, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
