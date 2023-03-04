/**
 * Author: Deean
 * Date: 2023-03-04 10:01
 * FileName: algorithm
 * Description: 2574. 左右元素和的差值
 */

#include "..\common\leetcode.h"

int *leftRigthDifference(int *nums, int numsSize, int *returnSize) {
    int left[numsSize], right[numsSize];
    int *answer = (int *) malloc(sizeof(int) * numsSize);
    left[0] = right[numsSize - 1] = 0;
    for (int i = 1; i < numsSize; ++i) {
        left[i] = left[i - 1] + nums[i - 1];
        right[numsSize - 1 - i] = right[numsSize - i] + nums[numsSize - i];
    }
    for (int i = 0; i < numsSize; ++i) {
        answer[i] = abs(left[i] - right[i]);
    }
    *returnSize = numsSize;
    return answer;
}

int main() {
    arrayEntry *e = arrayParse1D("[10,4,8,3]", ARRAY_INT);
    int returnSize;
    int *ans = leftRigthDifference(arrayValue(e), arraySize(e), &returnSize);
    char *s = arrayToString1D(ans, returnSize, ARRAY_INT);
    printf("%s", s);
    return 0;
}
