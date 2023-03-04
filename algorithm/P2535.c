/**
 * Author: Deean
 * Date: 2023-03-04 11:39
 * FileName: algorithm
 * Description: 2535. 数组元素和与数字和的绝对差
 */

#include "..\common\leetcode.h"

int differenceOfSum(int *nums, int numsSize) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < numsSize; ++i) {
        int el = nums[i];
        sum1 += el;
        while (el) {
            sum2 += el % 10;
            el /= 10;
        }
    }
    return abs(sum1 - sum2);
}

int main() {
    arrayEntry *e = arrayParse1D("[1,15,6,3]", ARRAY_INT);
    int ans = differenceOfSum(arrayValue(e), arraySize(e));
    printf("%d\n", ans);
    assert(ans == 9);
    return 0;
}
