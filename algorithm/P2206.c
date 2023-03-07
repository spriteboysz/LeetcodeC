/**
 * Author: Deean
 * Date: 2023-03-06 23:38
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MAX_VALUE 501

bool divideArray(int *nums, int numsSize) {
    int number[MAX_VALUE] = {0};
    for (int i = 0; i < numsSize; ++i) {
        number[nums[i]]++;
    }
    for (int i = 0; i < MAX_VALUE; ++i) {
        if (number[i] % 2 == 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int nums[] = {3, 2, 3, 2, 2, 2};
    int ans = divideArray(nums, 6);
    printf("%d\n", ans);
    return 0;
}
