/**
 * Author: Deean
 * Date: 2023-03-11 19:27
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countGoodTriplets(int *arr, int arrSize, int a, int b, int c) {
    int cnt = 0;
    for (int i = 0; i < arrSize; ++i) {
        for (int j = i + 1; j < arrSize; ++j) {
            if (abs(arr[i] - arr[j]) > a) continue;
            for (int k = j + 1; k < arrSize; ++k) {
                if (abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main() {
    int nums[] = {3, 0, 1, 1, 9, 7};
    int ans = countGoodTriplets(nums, 6, 7, 2, 3);
    printf("%d\n", ans);
    return 0;
}
