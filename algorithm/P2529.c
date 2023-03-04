/**
 * Author: Deean
 * Date: 2023-03-04 11:50
 * FileName: algorithm
 * Description: 2529. 正整数和负整数的最大计数
 */

#include "..\common\leetcode.h"

int maximumCount(int *nums, int numsSize) {
    int positive = 0, negative = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] > 0) positive++;
        if (nums[i] < 0) negative++;
    }
    return (int) fmax(positive, negative);
}

int main() {
    arrayEntry *e = arrayParse1D("[-2,-1,-1,1,2,3]", ARRAY_INT);
    int ans = maximumCount(arrayValue(e), arraySize(e));
    printf("%d\n", ans);
    assert(ans == 3);
    return 0;
}
