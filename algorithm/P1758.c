/**
 * Author: Deean
 * Date: 2023-03-11 14:06
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int minOperations(char *s) {
    int cnt = 0, n = strlen(s);
    for (int i = 0; i < n; ++i) {
        if (s[i] != (i % 2 + '0')) {
            cnt++;
        }
    }
    return fmin(cnt, n - cnt);
}

int main() {
    int ans = minOperations("0100");
    printf("%d\n", ans);
    return 0;
}
