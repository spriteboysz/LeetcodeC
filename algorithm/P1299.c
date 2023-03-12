/**
 * Author: Deean
 * Date: 2023-03-12 17:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *replaceElements(int *arr, int arrSize, int *returnSize) {
    int maximum = -1;
    int *ret = (int *) malloc(sizeof(int) * arrSize);
    ret[arrSize - 1] = maximum;
    for (int i = arrSize - 2; i >= 0; --i) {
        maximum = fmax(maximum, arr[i + 1]);
        ret[i] = maximum;
    }
    *returnSize = arrSize;
    return ret;
}

int main() {
    int nums[] = {17, 18, 5, 4, 6, 1};
    int n;
    int *ans = replaceElements(nums, 6, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
