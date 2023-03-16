/**
 * Author: Deean
 * Date: 2023-03-15 22:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) b - *(int *) a;
}

int largestPerimeter(int *nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i = 0; i + 2 < numsSize; ++i) {
        if (nums[i] < nums[i + 1] + nums[i + 2]) {
            return nums[i] + nums[i + 1] + nums[i + 2];
        }
    }
    return 0;
}

int main() {
    int nums[] = {1, 2, 1, 10};
    int ans = largestPerimeter(nums, 4);
    printf("%d\n", ans);
    return 0;
}
