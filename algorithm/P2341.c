/**
 * Author: Deean
 * Date: 2023-03-05 17:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *numberOfPairs(int *nums, int numsSize, int *returnSize) {
    int number[101] = {0};
    for (int i = 0; i < numsSize; ++i) {
        number[nums[i]]++;
    }

    int *ans = malloc(sizeof(int) * 2);
    memset(ans, 0, sizeof(int) * 2);
    for (int i = 0; i < 101; ++i) {
        ans[0] += number[i] / 2;
        ans[1] += number[i] % 2;
    }
    *returnSize = 2;
    return ans;
}

int main() {
    int nums[] = {1, 3, 2, 1, 3, 2, 2};
    int m = 2;
    int *ans = numberOfPairs(nums, 7, &m);
    printf("%d %d\n", ans[0], ans[1]);
    return 0;
}
