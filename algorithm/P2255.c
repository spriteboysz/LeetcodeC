/**
 * Author: Deean
 * Date: 2023-03-04 23:24
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countPrefixes(char **words, int wordsSize, char *s) {
    int cnt = 0;
    for (int i = 0; i < wordsSize; ++i) {
        bool flag = true;
        if (strlen(words[i]) <= strlen(s)) {
            for (int j = 0; j < strlen(words[i]); ++j) {
                if (words[i][j] != s[j]) {
                    flag = false;
                    break;
                }
            }
        } else {
            flag = false;
        }
        if (flag) cnt++;
    }
    return cnt;
}

int main() {
    char *words[] = {"a", "b", "c", "ab", "bc", "abc"};
    int ans = countPrefixes(words, 6, "abc");
    printf("%d\n", ans);
    return 0;
}
