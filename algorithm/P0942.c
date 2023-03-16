/**
 * Author: Deean
 * Date: 2023-03-15 23:20
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *diStringMatch(char *s, int *returnSize) {
    int n = strlen(s);
    int *nums = (int *) malloc(sizeof(int) * (n + 1));
    int left = 0, right = n, pos = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'I') {
            nums[pos++] = left++;
        } else {
            nums[pos++] = right--;
        }
    }
    nums[pos++] = left;
    *returnSize = pos;
    return nums;
}

int main() {
    int n;
    int *ans = diStringMatch("IDID", &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
