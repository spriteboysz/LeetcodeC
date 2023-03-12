/**
 * Author: Deean
 * Date: 2023-03-12 13:26
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *smallerNumbersThanCurrent(int *nums, int numsSize, int *returnSize) {
    int *smaller = (int *) malloc(sizeof(int) * numsSize);
    int pos = 0;
    for (int i = 0; i < numsSize; ++i) {
        int cnt = 0;
        for (int j = 0; j < numsSize; ++j) {
            if (nums[i] > nums[j]) cnt++;
        }
        smaller[pos++] = cnt;
    }
    *returnSize = pos;
    return smaller;
}

int main() {
    int nums[] = {8, 1, 2, 2, 3};
    int n;
    int *ans = smallerNumbersThanCurrent(nums, 5, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
