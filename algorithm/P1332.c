/**
 * Author: Deean
 * Date: 2023-03-12 16:41
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int removePalindromeSub(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) {
            return 2;
        }
    }
    return 1;
}

int main() {
    int ans = removePalindromeSub("ababa");
    printf("%d\n", ans);
    return 0;
}
