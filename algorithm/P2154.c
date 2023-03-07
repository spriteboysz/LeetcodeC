/**
 * Author: Deean
 * Date: 2023-03-06 22:30
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int findFinalValue(int* nums, int numsSize, int original){
    int number[2001] = {0};
    for (int i = 0; i < numsSize; ++i) {
        number[nums[i]]++;
    }
    while(number[original]) {
        original *= 2;
    }
    return original;
}

int main() {
    int nums[] = {5,3,6,1,12};
    int ans = findFinalValue(nums, 5, 3);
    printf("%d\n", ans);
    return 0;
}
