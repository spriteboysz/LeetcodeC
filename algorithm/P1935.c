/**
 * Author: Deean
 * Date: 2023-03-08 21:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int canBeTypedWords(char *text, char *brokenLetters) {
    int alphabet[26] = {0,};
    for (int i = 0; i < strlen(brokenLetters); i++) {
        alphabet[brokenLetters[i] - 'a']++;
    }
    int n = strlen(text), count = 0, flag = 0;
    for (int i = 0; i < n; i++) {
        if (text[i] == ' ' && flag == 0) {
            count++;
        }
        if (text[i] == ' ' && flag == 1) {
            flag = 0;
        }
        if (text[i] != ' ' && alphabet[text[i] - 'a'] != 0) {
            flag = 1;
        }
        if (i == n - 1 && flag == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int ans = canBeTypedWords("hello world", "ad");
    printf("%d\n", ans);
    return 0;
}
