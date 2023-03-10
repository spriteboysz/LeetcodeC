/**
 * Author: Deean
 * Date: 2023-03-10 23:03
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countConsistentStrings(char *allowed, char **words, int wordsSize) {
    int alphabet[26] = {0};
    for (int i = 0; allowed[i] != '\0'; i++) {
        alphabet[allowed[i] - 'a']++;
    }
    int cnt = 0;
    for (int i = 0; i < wordsSize; ++i) {
        bool flag = true;
        for (int j = 0; words[i][j] != '\0'; j++) {
            if (alphabet[words[i][j] - 'a'] == 0) {
                flag = false;
                break;
            }
        }
        if (flag) cnt++;
    }
    return cnt;
}

int main() {
    char *words[] = {"ad", "bd", "aaab", "baa", "badab"};
    int ans = countConsistentStrings("ab", words, 5);
    printf("%d\n", ans);
    return 0;
}
