/**
 * Author: Deean
 * Date: 2022-10-22 21:12
 * FileName: algorithm/P1920.c
 * Description: 
 */

#include <leetcode.h>

int *buildArray(int *nums, int numsSize, int *returnSize) {
    int i;
    //申请一个ans数组用于返回
    int *ans = (int *) malloc(sizeof(int) * numsSize);
    //根据题意遍历数组即可
    for (i = 0; i < numsSize; i++)
        ans[i] = nums[nums[i]];
    //记得填返回值
    *returnSize = numsSize;
    return ans;
}

int main() {
    arrayEntry *e = arrayParse1D("[5,0,1,2,3,4]", ARRAY_INT);
    int returnSize;
    int *a = buildArray(arrayValue(e), arraySize(e), &returnSize);
    char* s = arrayToString1D(a, returnSize, ARRAY_INT);
    printf("%s", s);
    return 0;
}