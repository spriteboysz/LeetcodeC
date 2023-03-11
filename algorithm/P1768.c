/**
 * Author: Deean
 * Date: 2023-03-11 14:19
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *mergeAlternately(char *word1, char *word2) {
    int n1 = strlen(word1), n2 = strlen(word2);
    char *word = (char *) malloc(sizeof(char) * (n1 + n2 + 1));
    int pos = 0;
    for (int i = 0, j = 0; i < n1 || j < n2; ++i, ++j) {
        if (i < n1) word[pos++] = word1[i];
        if (j < n2) word[pos++] = word2[j];
    }
    word[pos] = '\0';
    return word;
}

int main() {
    char *ans = mergeAlternately("ab", "pqrs");
    puts(ans);
    return 0;
}
