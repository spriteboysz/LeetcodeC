/**
 * Author: Deean
 * Date: 2023-03-04 13:58
 * FileName: algorithm
 * Description: 2465. 不同的平均值数目
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int distinctAverages(int *nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int hash[201];
    memset(hash, 0, sizeof(hash));
    int left = 0, right = numsSize - 1, cnt = 0;
    while (left < right) {
        int temp = nums[left] + nums[right];
        if (hash[temp] == 0) {
            cnt++;
            hash[temp]++;
        }
        left++;
        right--;
    }
    return cnt;
}

int main() {
    arrayEntry *e = arrayParse1D("[4,1,4,0,3,5]", ARRAY_INT);
    int ans = distinctAverages(arrayValue(e), arraySize(e));
    printf("%d\n", ans);
    return 0;
}
