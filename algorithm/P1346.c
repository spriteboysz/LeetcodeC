/**
 * Author: Deean
 * Date: 2023-03-12 16:14
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool checkIfExist(int *arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        int temp = 2 * arr[i];
        for (int j = 0; j < arrSize; j++) {
            if (j != i && temp == arr[j]) return true;
        }
    }
    return false;
}

int main() {
    int nums[] = {10, 2, 5, 3};
    int ans = checkIfExist(nums, 4);
    printf("%d\n", ans);
    return 0;
}
