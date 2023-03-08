/**
 * Author: Deean
 * Date: 2023-03-08 22:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool areOccurrencesEqual(char *s) {
    int alphabet[26] = {0,};
    for (int i = 0; s[i] != '\0'; ++i) {
        alphabet[s[i] - 'a']++;
    }
    int num = 0;
    for (int i = 0; i < 26; ++i) {
        if (alphabet[i] != 0) {
            if (num == 0) {
                num = alphabet[i];
            } else if (num != alphabet[i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int ans = areOccurrencesEqual("abacbc");
    printf("%d\n", ans);
    return 0;
}
