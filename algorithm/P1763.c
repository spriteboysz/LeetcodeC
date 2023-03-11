/**
 * Author: Deean
 * Date: 2023-03-11 14:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *longestNiceSubstring(char *s) {
    int n = strlen(s), maxLen = 0, maxPos = 0;
    for (int i = 0; i < n; ++i) {
        int lower = 0, upper = 0;
        for (int j = i; j < n; ++j) {
            if (islower(s[j])) {
                lower |= 1 << (s[j] - 'a');
            } else {
                upper |= 1 << (s[j] - 'A');
            }
            if (lower == upper && j - i + 1 > maxLen) {
                maxPos = i;
                maxLen = j - i + 1;
            }
        }
    }
    char *nice = (char *) malloc(sizeof(char) * (maxLen + 1));
    strncpy(nice, s + maxPos, maxLen);
    nice[maxLen] = '\0';
    return nice;
}

int main() {
    char *ans = longestNiceSubstring("YazaAay");
    puts(ans);
    return 0;
}
