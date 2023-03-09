/**
 * Author: Deean
 * Date: 2023-03-08 22:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isPrefixString(char *s, char **words, int wordsSize) {
    int k = 0, i = 0, j = 0;
    while (s[k] != '\0') {
        if (i == wordsSize) {
            return false;
        } else if (words[i][j] == '\0') {
            i++;
            j = 0;
        } else if (s[k] != words[i][j]) {
            return false;
        } else {
            k++;
            j++;
        }
    }
    return words[i][j] == '\0';
}

int main() {
    char *words[] = {"i", "love", "leetcode", "apples"};
    int ans = isPrefixString("iloveleetcode", words, 4);
    printf("%d\n", ans);
    return 0;
}
