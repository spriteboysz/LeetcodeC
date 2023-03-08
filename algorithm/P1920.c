/**
 * Author: Deean
 * Date: 2022-10-22 21:12
 * FileName: algorithm/P1920.c
 * Description: 
 */

#include "..\common\leetcode.h"

int *buildArray(int *nums, int numsSize, int *returnSize) {
    int *ans = (int *) malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[nums[i]];
    }
    *returnSize = numsSize;
    return ans;
}

int main() {
    arrayEntry *e = arrayParse1D("[5,0,1,2,3,4]", ARRAY_INT);
    int returnSize;
    int *a = buildArray(arrayValue(e), arraySize(e), &returnSize);
    char *s = arrayToString1D(a, returnSize, ARRAY_INT);
    printf("%s", s);
    return 0;
}