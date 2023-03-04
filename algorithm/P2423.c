/**
 * Author: Deean
 * Date: 2023-03-04 17:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

static bool removeChar(char *word, int index) {
    int alphabet[26] = {0}, n = strlen(word);
    int minimum = n, maximum = -1;
    for (int i = 0; i < n; ++i) {
        if (i == index) continue;
        alphabet[word[i] - 'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (alphabet[i]) {
            minimum = fmin(minimum, alphabet[i]);
            maximum = fmax(maximum, alphabet[i]);
        }
    }
    return maximum == minimum;
}

bool equalFrequency(char *word) {
    for (int i = 0; i < strlen(word); ++i) {
        if (removeChar(word, i)) {
            return true;
        }
    }
    return false;
}


int main() {
    printf("%d\n", equalFrequency("abcc"));
    return 0;
}
