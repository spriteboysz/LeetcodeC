/**
 * Author: Deean
 * Date: 2023-03-07 22:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool checkIfPangram(char *sentence) {
    int alphabet[26] = {0};
    for (int i = 0; sentence[i] != '\0'; ++i) {
        alphabet[sentence[i] - 'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (alphabet[i] == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int ans = checkIfPangram("thequickbrownfoxjumpsoverthelazydog");
    printf("%d\n", ans);
    return 0;
}
