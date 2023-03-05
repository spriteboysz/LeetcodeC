/**
 * Author: Deean
 * Date: 2023-03-05 22:32
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MAX_COUNT 26

bool checkAlmostEquivalent(char *word1, char *word2) {
    int alphabet[MAX_COUNT] = {0};
    for (int i = 0; word1[i] != '\0'; ++i) {
        alphabet[word1[i] - 'a']++;
    }
    for (int i = 0; word2[i] != '\0'; ++i) {
        alphabet[word2[i] - 'a']--;
    }
    for (int i = 0; i < MAX_COUNT; ++i) {
        if (abs(alphabet[i]) > 3) {
            return false;
        }
    }
    return true;
}

int main() {
    char *word1 = "abcdeef", *word2 = "abaaacc";
    int ans = checkAlmostEquivalent(word1, word2);
    printf("%d\n", ans);
    return 0;
}
