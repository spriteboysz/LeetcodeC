/**
 * Author: Deean
 * Date: 2023-03-12 21:46
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MAX_VAL 2001

bool uniqueOccurrences(int *arr, int arrSize) {
    int hash1[MAX_VAL] = {0};
    for (int i = 0; i < arrSize; ++i) {
        hash1[arr[i] + 1000]++;
    }

    int hash2[MAX_VAL] = {0};
    for (int i = 0; i < MAX_VAL; ++i) {
        if (hash1[i]) {
            hash2[hash1[i]]++;
        }
    }
    for (int i = 0; i < MAX_VAL; ++i) {
        if (hash2[i] > 1) return false;
    }
    return true;
}

int main() {
    int nums[] = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    int ans = uniqueOccurrences(nums, 10);
    printf("%d\n", ans);
    return 0;
}
