/**
 * Author: Deean
 * Date: 2023-03-04 18:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int mostFrequentEven(int *nums, int numsSize) {
    int map[100001] = {0};
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] % 2 == 0) {
            map[nums[i]]++;
        }
    }
    int maximum = 0;
    for (int i = 0; i < 100001; ++i) {
        if (map[i] > map[maximum]) {
            maximum = i;
        }
    }
    return (maximum == 0 && map[maximum] == 0) ? -1 : maximum;
}

int main() {
    int nums[] = {0, 1, 2, 2, 4, 4, 1};
    int ans = mostFrequentEven(nums, 7);
    printf("%d\n", ans);
    return 0;
}
