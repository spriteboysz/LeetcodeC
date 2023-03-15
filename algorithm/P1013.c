/**
 * Author: Deean
 * Date: 2023-03-14 22:18
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool canThreePartsEqualSum(int *arr, int arrSize) {
    int sum = 0;
    for (int i = 0; i < arrSize; ++i) {
        sum += arr[i];
    }
    if (sum % 3 != 0) {
        return false;
    }
    int acc = 0, target = sum / 3, cnt = 0;
    for (int i = 0; i < arrSize; i++) {
        acc += arr[i];
        if (acc == target) {
            cnt++;
            acc = 0;
        }
        if (cnt == 2 && i < arrSize - 1) {
            return true;
        }
    }
    return false;
}

int main() {
    int nums[] = {0, 2, 1, -6, 6, -7, 9, 1, 2, 0, 1};
    int ans = canThreePartsEqualSum(nums, 11);
    printf("%d\n", ans);
    return 0;
}
