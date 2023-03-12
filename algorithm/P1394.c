/**
 * Author: Deean
 * Date: 2023-03-12 11:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MAX_VAL 501

int findLucky(int *arr, int arrSize) {
    int hash[MAX_VAL] = {0};
    for (int i = 0; i < arrSize; ++i) {
        hash[arr[i]]++;
    }
    int lucky = -1;
    for (int i = 1; i < MAX_VAL; ++i) {
        if (i == hash[i]) {
            lucky = i;
        }
    }
    return lucky;
}

int main() {
    int nums[] = {2, 2, 3, 4};
    int ans = findLucky(nums, 4);
    printf("%d\n", ans);
    return 0;
}
