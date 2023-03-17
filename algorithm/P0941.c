/**
 * Author: Deean
 * Date: 2023-03-16 22:44
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool validMountainArray(int *arr, int arrSize) {
    int index = 0;
    while (index + 1 < arrSize && arr[index] < arr[index + 1]) {
        index++;
    }
    if (index == 0 || index == arrSize - 1) {
        return false;
    }
    while (index + 1 < arrSize && arr[index] > arr[index + 1]) {
        index++;
    }
    return index == arrSize - 1;
}

int main() {
    int arr[] = {0, 3, 2, 1};
    int ans = validMountainArray(arr, 4);
    printf("%d\n", ans);
    return 0;
}
