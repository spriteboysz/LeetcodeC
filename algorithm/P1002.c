/**
 * Author: Deean
 * Date: 2023-03-15 20:54
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"


char **commonChars(char **words, int wordsSize, int *returnSize) {
    int hash1[26] = {0}, n = strlen(words[0]);
    for (int i = 0; i < n; ++i) {
        hash1[words[0][i] - 'a']++;
    }
    for (int i = 1; i < wordsSize; ++i) {
        int hash2[26] = {0};
        for (int j = 0; words[i][j] != '\0'; ++j) {
            hash2[words[i][j] - 'a']++;
        }
        for (int j = 0; j < 26; ++j) {
            hash1[j] = fmin(hash1[j], hash2[j]);
        }
    }
    char **common = (char **) malloc(sizeof(char *) * n);
    int pos = 0;
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < hash1[i]; ++j) {
            common[pos] = malloc(sizeof(char) * 2);
            common[pos][0] = i + 'a';
            common[pos][1] = '\0';
            pos++;
        }
    }
    *returnSize = pos;
    return common;
}

int main() {
    char *words[] = {"bella", "label", "roller"};
    int n;
    char **ans = commonChars(words, 3, &n);
    for (int i = 0; i < n; ++i) {
        puts(ans[i]);
    }
    return 0;
}
