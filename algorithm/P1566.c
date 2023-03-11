/**
 * Author: Deean
 * Date: 2023-03-11 21:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool containsPattern(int *arr, int arrSize, int m, int k) {
    int n = m * k;
    if (arrSize < n) return false;
    for (int i = 0; i <= arrSize - n; ++i) {
        bool match = true;
        for (int j = i; j < i + (k - 1) * m; j += m) {
            if (memcmp(arr + j, arr + j + m, m * sizeof(int))) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 4, 4, 4, 4};
    int ans = containsPattern(nums, 6, 1, 3);
    printf("%d\n", ans);
    return 0;
}
