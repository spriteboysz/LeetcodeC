/**
 * Author: Deean
 * Date: 2023-03-12 13:18
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *sortString(char *s) {
    int hash[26] = {0};
    int n = strlen(s);
    for (int i = 0; i < n; ++i) {
        hash[s[i] - 'a']++;
    }

    char *ss = (char *) malloc(sizeof(char) * (n + 1));
    int pos = 0;
    while (pos < n) {
        for (int i = 0; i < 26; ++i) {
            if (hash[i]) {
                ss[pos++] = i + 'a';
                hash[i]--;
            }
        }
        for (int i = 25; i >= 0; --i) {
            if (hash[i]) {
                ss[pos++] = i + 'a';
                hash[i]--;
            }
        }
    }
    ss[pos] = '\0';
    return ss;
}

int main() {
    char *ans = sortString("aaaabbbbcccc");
    puts(ans);
    return 0;
}
