/**
 * Author: Deean
 * Date: 2023-03-11 18:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

bool canMakeArithmeticProgression(int *arr, int arrSize) {
    if (arrSize == 2) return true;
    qsort(arr, arrSize, sizeof(int), cmp);
    int diff = arr[1] - arr[0];
    for (int i = 2; i < arrSize; ++i) {
        if (arr[i] - arr[i - 1] != diff) {
            return false;
        }
    }
    return true;
}

int main() {
    int nums[] = {3, 5, 1};
    int ans = canMakeArithmeticProgression(nums, 3);
    printf("%d\n", ans);
    return 0;
}
