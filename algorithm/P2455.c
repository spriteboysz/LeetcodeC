/**
 * Author: Deean
 * Date: 2023-03-04 15:50
 * FileName: algorithm
 * Description: 2455. 可被三整除的偶数的平均值
 */

#include "..\common\leetcode.h"

int averageValue(int *nums, int numsSize) {
    int sum = 0, cnt = 0;
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] % 6 == 0) {
            sum += nums[i];
            cnt++;
        }
    }
    return cnt == 0 ? 0 : (int) (sum / cnt);
}

int main() {
    int nums[6] = {1, 3, 6, 10, 12, 15};
    int ans = averageValue(nums, 6);
    printf("%d\n", ans);
    return 0;
}
