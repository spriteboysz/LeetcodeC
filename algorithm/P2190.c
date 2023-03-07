/**
 * Author: Deean
 * Date: 2023-03-06 23:05
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MAX_VAL 1001

int mostFrequent(int *nums, int numsSize, int key) {
    int number[MAX_VAL] = {0};
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i - 1] == key) {
            number[nums[i]]++;
        }
    }
    int most = 0, index = -1;
    for (int i = 0; i < MAX_VAL; ++i) {
        if (number[i] > most) {
            most = number[i];
            index = i;
        }
    }
    return index;
}

int main() {
    int nums[] = {2, 2, 2, 2, 3};
    int ans = mostFrequent(nums, 5, 2);
    printf("%d\n", ans);
    return 0;
}
