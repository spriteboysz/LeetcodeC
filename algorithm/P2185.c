/**
 * Author: Deean
 * Date: 2023-03-06 23:01
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int prefixCount(char **words, int wordsSize, char *pref) {
    int cnt = 0, n = strlen(pref);
    for (int i = 0; i < wordsSize; ++i) {
        if (strncmp(words[i], pref, n) == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    char *words[] = {"pay", "attention", "practice", "attend"};
    int ans = prefixCount(words, 4, "at");
    printf("%d\n", ans);
    return 0;
}
