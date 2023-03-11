/**
 * Author: Deean
 * Date: 2023-03-11 14:02
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool check(int *nums, int numsSize) {
    int cnt = 0;
    for (int i = 0; i < numsSize - 1; ++i) {
        if (nums[i + 1] < nums[i]) {
            cnt++;
        }
        if (cnt == 2) return false;
    }
    return cnt == 0 || (cnt == 1 && nums[numsSize - 1] <= nums[0]);
}

int main() {
    int nums[] = {3, 4, 5, 1, 2};
    int ans = check(nums, 5);
    printf("%d\n", ans);
    return 0;
}
