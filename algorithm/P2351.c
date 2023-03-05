/**
 * Author: Deean
 * Date: 2023-03-05 17:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char repeatedCharacter(char *s) {
    int alphabet[26] = {0};
    for (int i = 0; s[i] != '\0'; ++i) {
        if (alphabet[s[i] - 'a']) {
            return s[i];
        }
        alphabet[s[i] - 'a'] = 1;
    }
    return s[0];
}

int main() {
    char ans = repeatedCharacter("abccbaacz");
    printf("%c\n", ans);
    return 0;
}
