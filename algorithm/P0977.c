/**
 * Author: Deean
 * Date: 2023-03-15 22:25
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *sortedSquares(int *nums, int numsSize, int *returnSize) {
    int *square = (int *) malloc(sizeof(int) * numsSize);
    int left = 0, right = numsSize - 1, pos = numsSize - 1;
    while (left <= right) {
        if (nums[left] * nums[left] > nums[right] * nums[right]) {
            square[pos--] = nums[left] * nums[left];
            left++;
        } else {
            square[pos--] = nums[right] * nums[right];
            right--;
        }
    }
    *returnSize = numsSize;
    return square;
}

int main() {
    int nums[] = {-4, -1, 0, 3, 10};
    int n;
    int *ans = sortedSquares(nums, 5, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
