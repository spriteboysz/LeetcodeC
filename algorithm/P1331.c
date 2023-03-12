/**
 * Author: Deean
 * Date: 2023-03-12 16:45
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

typedef struct {
    int val, index;
} item;

int cmp(const void *a, const void *b) {
    return ((item *) a)->val - ((item *) b)->val;
}

int *arrayRankTransform(int *arr, int arrSize, int *returnSize) {
    item *sArray = (item *) calloc(arrSize, sizeof(item));
    for (int i = 0; i < arrSize; ++i) {
        sArray[i].val = arr[i];
        sArray[i].index = i;
    }
    qsort(sArray, arrSize, sizeof(item), cmp);
    for (int i = 0, j = 0; i < arrSize; ++i) {
        arr[sArray[i].index] = (i && sArray[i].val == sArray[i - 1].val) ? j : ++j;
    }
    *returnSize = arrSize;
    return arr;
}

int main() {
    int nums[] = {40, 10, 20, 30};
    int n;
    int *ans = arrayRankTransform(nums, 4, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
