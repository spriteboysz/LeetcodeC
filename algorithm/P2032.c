/**
 * Author: Deean
 * Date: 2023-03-05 19:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *twoOutOfThree(int *nums1, int nums1Size, int *nums2, int nums2Size, int *nums3, int nums3Size, int *returnSize) {
    int number[101] = {0};
    for (int i = 0; i < nums1Size; ++i) {
        number[nums1[i]] |= 1;
    }
    for (int i = 0; i < nums2Size; ++i) {
        number[nums2[i]] |= 2;
    }
    for (int i = 0; i < nums3Size; ++i) {
        number[nums3[i]] |= 4;
    }
    int *res = (int *) malloc(sizeof(int) * 101);
    int pos = 0;
    for (int i = 0; i <= 100; ++i) {
        if (number[i] == 3 || number[i] == 5 || number[i] == 6 || number[i] == 7) {
            res[pos++] = i;
        }
    }
    *returnSize = pos;
    return res;
}

int main() {
    int nums1[] = {3, 1};
    int nums2[] = {2, 3};
    int nums3[] = {1, 2};
    int m;
    int *ans = twoOutOfThree(nums1, 3, nums2, 2, nums3, 3, &m);
    printf("%d %d %d\n", ans[0], ans[1], ans[2]);
    printf("%d\n", m);
    return 0;
}
