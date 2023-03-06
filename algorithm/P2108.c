/**
 * Author: Deean
 * Date: 2023-03-06 21:18
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isPalindrome(char *word) {
    int i = 0, j = strlen(word) - 1;
    while (i < j) {
        if (word[i] != word[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

char *firstPalindrome(char **words, int wordsSize) {
    for (int i = 0; i < wordsSize; ++i) {
        if (isPalindrome(words[i])) {
            return words[i];
        }
    }
    return "";
}

int main() {
    char *words[] = {"abc", "car", "ada", "racecar", "cool"};
    char *ans = firstPalindrome(words, 5);
    puts(ans);
    return 0;
}
