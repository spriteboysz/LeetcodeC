/**
 * Author: Deean
 * Date: 2023-03-08 22:31
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *makeFancyString(char *s) {
    int n = strlen(s);
    if (n <= 2) return s;
    char *ss = (char *) malloc(sizeof(char) * (n + 1));
    for (int i = 0, j = 0; i < n; ++i) {
        if (i <= 1 || s[i - 2] != s[i] || s[i - 1] != s[i]) {
            ss[j++] = s[i];
        }
        ss[j] = '\0';
    }
    return ss;
}

int main() {
    char *ans = makeFancyString("leeetcode");
    puts(ans);
    return 0;
}
