/**
 * Author: Deean
 * Date: 2023-03-06 22:18
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int countElements(int *nums, int numsSize) {
    if (numsSize <= 2) return 0;
    qsort(nums, numsSize, sizeof(int), cmp);
    int left = numsSize - 1, right = 0;
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i] != nums[0]) {
            left = i;
            break;
        }
    }
    for (int i = numsSize - 2; i >= 0; i--) {
        if (nums[i] != nums[numsSize - 1]) {
            right = i;
            break;
        }
    }
    return (int) fmax(0, right - left + 1);
}

int main() {
    int nums[] = {11, 7, 2, 15};
    int ans = countElements(nums, 4);
    printf("%d\n", ans);
    return 0;
}
