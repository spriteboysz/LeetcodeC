/**
 * Author: Deean
 * Date: 2023-03-11 19:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *makeGood(char *s) {
    int n = strlen(s);
    char *ss = (char *) malloc(sizeof(char) * (n + 1));
    int pos = 0;
    for (int i = 0; i < n; ++i) {
        if (pos == 0) {
            ss[pos++] = s[i];
        } else if (abs(ss[pos - 1] - s[i]) == 32) {
            pos--;
        } else {
            ss[pos++] = s[i];
        }
    }
    ss[pos] = '\0';
    return ss;
}

int main() {
    char *ans = makeGood("leEeetcode");
    puts(ans);
    return 0;
}
