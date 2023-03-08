/**
 * Author: Deean
 * Date: 2023-03-07 22:54
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countGoodSubstrings(char *s) {
    int cnt = 0;
    if (strlen(s) < 3) return cnt;
    for (int i = 1; s[i + 1] != '\0'; ++i) {
        if (s[i - 1] != s[i] && s[i - 1] != s[i + 1] && s[i] != s[i + 1]) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int ans = countGoodSubstrings("aababcabc");
    printf("%d\n", ans);
    return 0;
}
