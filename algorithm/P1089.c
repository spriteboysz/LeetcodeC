/**
 * Author: Deean
 * Date: 2023-03-13 23:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

void duplicateZeros(int *arr, int arrSize) {
    bool flag = true;
    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] == 0) {
            if (flag) {
                for (int j = arrSize; j > i; --j) {
                    arr[j] = arr[j - 1];
                }
            }
            flag = !flag;
        }
    }
    for (int i = 0; i < arrSize; ++i) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {1, 0, 2, 3, 0, 4, 5, 0};
    duplicateZeros(nums, 8);
    return 0;
}
