/**
 * Author: Deean
 * Date: 2023-03-11 21:54
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int sumOddLengthSubarrays(int *arr, int arrSize) {
    int sum = 0;
    for (int start = 0; start < arrSize; ++start) {
        for (int length = 1; start + length <= arrSize; length += 2) {
            int end = start + length - 1;
            for (int i = start; i <= end; ++i) {
                sum += arr[i];
            }
        }
    }
    return sum;
}

int main() {
    int nums[] = {1, 4, 2, 5, 3};
    int ans = sumOddLengthSubarrays(nums, 5);
    printf("%d\n", ans);
    return 0;
}
