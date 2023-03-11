/**
 * Author: Deean
 * Date: 2023-03-11 21:41
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *modifyString(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n; ++i) {
        if (s[i] != '?') continue;
        for (char c = 'a'; c <= 'c'; ++c) {
            if ((i > 0 && s[i - 1] == c) || (i < n - 1 && s[i + 1] == c)) {
                continue;
            }
            s[i] = c;
            break;
        }
    }
    return s;
}

int main() {
    char *ans = modifyString("?zs");
    puts(ans);
    return 0;
}
