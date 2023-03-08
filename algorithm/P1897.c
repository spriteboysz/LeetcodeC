/**
 * Author: Deean
 * Date: 2023-03-07 23:20
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool makeEqual(char **words, int wordsSize) {
    int alphabet[26] = {0};
    for (int i = 0; i < wordsSize; ++i) {
        for (int j = 0; words[i][j] != '\0'; ++j) {
            alphabet[words[i][j] - 'a']++;
        }
    }
    for (int i = 0; i < 26; ++i) {
        if (alphabet[i] % wordsSize != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    char *words[] = {"abc", "aabc", "bc"};
    int ans = makeEqual(words, 4);
    printf("%d\n", ans);
    return 0;
}
