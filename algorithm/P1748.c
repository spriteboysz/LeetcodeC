/**
 * Author: Deean
 * Date: 2023-03-11 13:46
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MAX_VALUE 101

int sumOfUnique(int *nums, int numsSize) {
    int number[MAX_VALUE] = {0};
    for (int i = 0; i < numsSize; ++i) {
        number[nums[i]]++;
    }
    int sum = 0;
    for (int i = 0; i < MAX_VALUE; ++i) {
        if (number[i] == 1) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int nums[] = {1, 2, 3, 2};
    int ans = sumOfUnique(nums, 4);
    printf("%d\n", ans);
    return 0;
}
