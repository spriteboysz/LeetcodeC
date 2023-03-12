/**
 * Author: Deean
 * Date: 2023-03-12 17:22
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *freqAlphabets(char *s) {
    int n = strlen(s), pos = 0;
    char *ss = (char *) malloc(sizeof(char) * (n + 1));
    for (int i = 0; i < n; ++i) {
        if (i + 2 < n && s[i + 2] == '#') {
            ss[pos++] = (s[i] - '0') * 10 + (s[i + 1] - '1') + 'a';
            i += 2;
        } else {
            ss[pos++] = (s[i] - '1') + 'a';
        }
    }
    ss[pos] = '\0';
    return ss;
}

int main() {
    char *ans = freqAlphabets("10#11#12");
    puts(ans);
    return 0;
}
