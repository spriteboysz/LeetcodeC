/**
 * Author: Deean
 * Date: 2023-03-09 22:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

double trimMean(int *arr, int arrSize) {
    qsort(arr, arrSize, sizeof(int), cmp);
    int sum = 0;
    for (int i = arrSize / 20; i < (19 * arrSize / 20); ++i) {
        sum += arr[i];
    }
    return sum / (0.9 * arrSize);
}

int main() {
    int nums[] = {6, 2, 7, 5, 1, 2, 0, 3, 10, 2, 5, 0, 5, 5, 0, 8, 7, 6, 8, 0};
    int ans = trimMean(nums, 20);
    printf("%d\n", ans);
    return 0;
}
