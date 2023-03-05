/**
 * Author: Deean
 * Date: 2023-03-05 17:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int minimumOperations(int *nums, int numsSize) {
    int number[101] = {0};
    for (int i = 0; i < numsSize; ++i) {
        number[nums[i]]++;
    }
    int cnt = 0;
    for (int i = 1; i <= 100; ++i) {
        if (number[i]) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int nums[] = {1, 5, 0, 3, 5};
    int ans = minimumOperations(nums, 5);
    printf("%d\n", ans);
    return 0;
}
