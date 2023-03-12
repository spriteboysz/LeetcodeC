/**
 * Author: Deean
 * Date: 2023-03-12 17:43
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int findNumbers(int *nums, int numsSize) {
    int cnt = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] == 0) continue;
        int digits = 0, temp = nums[i];
        while (temp) {
            digits++;
            temp /= 10;
        }
        if (digits % 2 == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int nums[] = {12, 345, 2, 6, 7896};
    int ans = findNumbers(nums, 5);
    printf("%d\n", ans);
    return 0;
}
