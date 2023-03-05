/**
 * Author: Deean
 * Date: 2023-03-05 10:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isAnagrams(char *s, char *p) {
    if (strlen(s) != strlen(p)) return false;
    int map[26] = {0};
    for (int i = 0; i < strlen(s); i++) {
        map[s[i] - 'a']++;
    }
    for (int i = 0; i < strlen(p); i++) {
        if (map[p[i] - 'a'] > 0) {
            map[p[i] - 'a']--;
        } else {
            return false;
        }
    }
    return true;
}

char **removeAnagrams(char **words, int wordsSize, int *returnSize) {
    char **ans = malloc(sizeof(char *) * wordsSize);
    for (int i = 0; i < wordsSize; i++) {
        ans[i] = malloc(sizeof(char) * 11);
    }
    *returnSize = 0;
    strcpy(ans[(*returnSize)++], words[0]);
    for (int i = 1; i < wordsSize; ++i) {
        if (!isAnagrams(words[i], words[i - 1])) {
            strcpy(ans[(*returnSize)++], words[i]);
        }
    }
    return ans;
}

int main() {
    char *words[] = {"abba", "baba", "bbaa", "cd", "cd"};
    int n = 2;
    char **ans = removeAnagrams(words, 5, &n);
    for (int i = 0; i < 2; ++i) {
        puts(ans[i]);
    }
    return 0;
}
