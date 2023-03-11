/**
 * Author: Deean
 * Date: 2023-03-11 19:41
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool threeConsecutiveOdds(int *arr, int arrSize) {
    if (arrSize < 3) return false;
    for (int i = 1; i < arrSize - 1; ++i) {
        if (arr[i - 1] % 2 && arr[i] % 2 && arr[i + 1] % 2) {
            return true;
        }
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 34, 3, 4, 5, 7, 23, 12};
    int ans = threeConsecutiveOdds(nums, 9);
    printf("%d\n", ans);
    return 0;
}
