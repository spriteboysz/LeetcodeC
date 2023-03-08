/**
 * Author: Deean
 * Date: 2023-03-07 22:40
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int subsetXORSum(int* nums, int numsSize){
    int xor = 0;
    for (int i = 0; i < numsSize; ++i) {
        xor |= nums[i];
    }
    return xor << (numsSize - 1);
}

int main() {
    int nums[] = {1, 3};
    int ans = subsetXORSum(nums, 2);
    printf("%d\n", ans);
    puts(ans);
    return 0;
}
