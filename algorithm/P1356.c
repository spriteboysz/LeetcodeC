/**
 * Author: Deean
 * Date: 2023-03-12 15:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int process(int num) {
    int cnt = 0;
    while (num) {
        cnt += num % 2;
        num /= 2;
    }
    return cnt;
}

int cmp(const void *a, const void *b) {
    int na = process(*(int *) a), nb = process(*(int *) b);
    return na == nb ? (*(int *) a - *(int *) b) : na - nb;
}

int *sortByBits(int *arr, int arrSize, int *returnSize) {
    qsort(arr, arrSize, sizeof(int), cmp);
    *returnSize = arrSize;
    return arr;
}

int main() {
    int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int n;
    int *ans = sortByBits(nums, 9, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
