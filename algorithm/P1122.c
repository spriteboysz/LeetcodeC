/**
 * Author: Deean
 * Date: 2023-03-13 22:55
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *relativeSortArray(int *arr1, int arr1Size, int *arr2, int arr2Size, int *returnSize) {
    int hash[1001] = {0}, pos = 0;
    for (int i = 0; i < arr1Size; ++i) {
        hash[arr1[i]]++;
    }

    for (int i = 0; i < arr2Size; ++i) {
        while (hash[arr2[i]] > 0) {
            arr1[pos++] = arr2[i];
            hash[arr2[i]]--;
        }
    }

    for (int i = 0; i < 1001; ++i) {
        while (hash[i] > 0) {
            arr1[pos++] = i;
            hash[i]--;
        }
    }

    *returnSize = arr1Size;
    return arr1;
}

int main() {
    int arr1[] = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    int arr2[] = {2, 1, 4, 3, 9, 6};
    int n;
    int *ans = relativeSortArray(arr1, 11, arr2, 6, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
