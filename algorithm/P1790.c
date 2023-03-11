/**
 * Author: Deean
 * Date: 2023-03-11 14:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool areAlmostEqual(char *s1, char *s2) {
    int n = strlen(s1), pos = 0, diff[2];
    for (int i = 0; i < n; ++i) {
        if (s1[i] != s2[i]) {
            if (pos >= 2) return false;
            diff[pos++] = i;
        }
    }
    if (pos == 0) return true;
    if (pos != 2) return false;
    return s1[diff[0]] == s2[diff[1]] && s1[diff[1]] == s2[diff[0]];
}

int main() {
    int ans = areAlmostEqual("bank", "kanb");
    printf("%d\n", ans);
    return 0;
}
