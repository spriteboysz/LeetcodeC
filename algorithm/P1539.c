/**
 * Author: Deean
 * Date: 2023-03-11 19:31
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int findKthPositive(int *arr, int arrSize, int k) {
    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] <= k) {
            k++;
        }
    }
    return k;
}

int main() {
    int nums[] = {2, 3, 4, 7, 11};
    int ans = findKthPositive(nums, 5, 5);
    printf("%d\n", ans);
    return 0;
}
