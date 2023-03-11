/**
 * Author: Deean
 * Date: 2023-03-11 16:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MAX_VAL 1001

bool canBeEqual(int *target, int targetSize, int *arr, int arrSize) {
    int number[MAX_VAL] = {0,};
    for (int i = 0; i < targetSize && targetSize == arrSize; ++i) {
        number[target[i]]++;
        number[arr[i]]--;
    }
    for (int i = 0; i < MAX_VAL; ++i) {
        if (number[i]) return false;
    }
    return true;
}

int main() {
    int target[] = {1, 2, 3, 4}, arr[] = {4, 3, 2, 1};
    int ans = canBeEqual(target, 4, arr, 4);
    printf("%d\n", ans);
    return 0;
}
