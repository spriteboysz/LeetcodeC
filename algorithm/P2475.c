/**
 * Author: Deean
 * Date: 2023-03-04 13:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int unequalTriplets(int *nums, int numsSize) {
    int cnt = 0;
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] == nums[j]) continue;
            for (int k = j + 1; k < numsSize; ++k) {
                if (nums[i] != nums[k] && nums[j] != nums[k]) {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main() {
    arrayEntry *e = arrayParse1D("[4,4,2,4,3]", ARRAY_INT);
    int ans = unequalTriplets(arrayValue(e), arraySize(e));
    printf("%d\n", ans);
    return 0;
}
