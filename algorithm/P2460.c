/**
 * Author: Deean
 * Date: 2023-03-04 14:08
 * FileName: algorithm
 * Description: 2460. 对数组执行操作
 */

#include "..\common\leetcode.h"

int *applyOperations(int *nums, int numsSize, int *returnSize) {
    for (int i = 0; i < numsSize - 1; ++i) {
        if (nums[i] == nums[i + 1]) {
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
    }
    for (int left = 0, right = 0; right < numsSize; ++right) {
        if (nums[right] != 0) {
            int temp = nums[right];
            nums[right] = nums[left];
            nums[left] = temp;
            left++;
        }
    }
    *returnSize = numsSize;
    return nums;
}

int main() {
    arrayEntry *e = arrayParse1D("[1,2,2,1,1,0]", ARRAY_INT);
    int m = 6;
    int *ans = applyOperations(arrayValue(e), arraySize(e), &m);
    printf("%s\n", arrayToString(arrayFrom1D(ans, m, ARRAY_INT)));
    return 0;
}
