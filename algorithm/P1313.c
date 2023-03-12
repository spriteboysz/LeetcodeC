/**
 * Author: Deean
 * Date: 2023-03-12 17:16
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *decompressRLElist(int *nums, int numsSize, int *returnSize) {
    int n = 0;
    for (int i = 0; i < numsSize; i += 2) {
        n += nums[i];
    }

    int *decompress = (int *) malloc(sizeof(int) * n);
    for (int i = 0, j = 0; i < numsSize; i += 2) {
        for (int k = 0; k < nums[i]; k++) {
            decompress[j++] = nums[i + 1];
        }
    }
    *returnSize = n;
    return decompress;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int n;
    int *ans = decompressRLElist(nums, 4, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
