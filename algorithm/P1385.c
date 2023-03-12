/**
 * Author: Deean
 * Date: 2023-03-12 12:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int findTheDistanceValue(int *arr1, int arr1Size, int *arr2, int arr2Size, int d) {
    int cnt = 0;
    for (int i = 0; i < arr1Size; ++i) {
        for (int j = 0; j < arr2Size; ++j) {
            if (abs(arr1[i] - arr2[j]) <= d) {
                break;
            } else if (j == arr2Size - 1) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int arr1[] = {4, 5, 8};
    int arr2[] = {10, 9, 1, 8};
    int ans = findTheDistanceValue(arr1, 3, arr2, 4, 2);
    printf("%d\n", ans);
    return 0;
}
