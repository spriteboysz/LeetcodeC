/**
 * Author: Deean
 * Date: 2023-03-12 17:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MAX_VAL 100001

int findSpecialInteger(int *arr, int arrSize) {
    int hash[MAX_VAL] = {0};
    for (int i = 0; i < arrSize; ++i) {
        hash[arr[i]]++;
    }
    int sum = 0;
    for (int i = 0; i < MAX_VAL; ++i) {
        if (hash[i] > arrSize * 0.25) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int nums[] = {1, 2, 2, 6, 6, 6, 6, 7, 10};
    int ans = findSpecialInteger(nums, 9);
    printf("%d\n", ans);
    return 0;
}
