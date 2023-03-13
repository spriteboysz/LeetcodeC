/**
 * Author: Deean
 * Date: 2023-03-12 22:44
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countCharacters(char **words, int wordsSize, char *chars) {
    int alphabet[26] = {0};
    for (int i = 0; chars[i] != '\0'; ++i) {
        alphabet[chars[i] - 'a']++;
    }
    int sum = 0;
    for (int i = 0; i < wordsSize; ++i) {
        int hash[26] = {0};
        for (int j = 0; words[i][j] != '\0'; ++j) {
            hash[words[i][j] - 'a']++;
        }
        bool flag = true;
        for (int j = 0; j < 26; ++j) {
            if (hash[j] > alphabet[j]) {
                flag = false;
                break;
            }
        }
        if (flag){
            sum += strlen(words[i]);
        }
    }
    return sum;
}

int main() {
    char *words[] = {"cat", "bt", "hat", "tree"};
    int ans = countCharacters(words, 4, "atach");
    printf("%d\n", ans);
    return 0;
}
