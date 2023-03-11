/**
 * Author: Deean
 * Date: 2023-03-11 16:26
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maxPower(char *s) {
    int maximum = 1, n = strlen(s), left = 0, right = 1;
    while (right < n) {
        if (s[right] == s[left]) {
            right++;
        } else {
            left++;
        }
        maximum = fmax(maximum, right - left);
    }
    return maximum;
}

int main() {
    int ans = maxPower("leetcode");
    printf("%d\n", ans);
    return 0;
}
