/**
 * Author: Deean
 * Date: 2023-03-12 10:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *word1, const void *word2) {
    return strlen(*(char **) word1) - strlen(*(char **) word2);
}

char **stringMatching(char **words, int wordsSize, int *returnSize) {
    qsort(words, wordsSize, sizeof(char *), cmp);
    char **match = (char **) malloc(sizeof(char *) * wordsSize);
    int pos = 0;
    for (int i = 0; i < wordsSize; ++i) {
        for (int j = i + 1; j < wordsSize; ++j) {
            if (strstr(words[j], words[i])) {
                match[pos++] = words[i];
                break;
            }
        }
    }
    *returnSize = pos;
    return match;
}

int main() {
    char *words[] = {"mass", "as", "hero", "superhero"};
    int n;
    char **ans = stringMatching(words, 4, &n);
    for (int i = 0; i < n; ++i) {
        puts(ans[i]);
    }
    return 0;
}
