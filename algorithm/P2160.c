/**
 * Author: Deean
 * Date: 2023-03-06 22:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int minimumSum(int num) {
    int nums[4] = {0, 0, 0, 0};
    for (int i = 0; i < 4; ++i) {
        nums[i] = num % 10;
        num /= 10;
    }
    qsort(nums, 4, sizeof(int), cmp);
    return (nums[0] + nums[1]) * 10 + nums[2] + nums[3];
}

int main() {
    int ans = minimumSum(4009);
    printf("%d\n", ans);
    return 0;
}
