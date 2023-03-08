/**
 * Author: Deean
 * Date: 2023-03-07 22:14
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *replaceDigits(char *s) {
    for (int i = 0; s[i] != '\0' && s[i + 1] != '\0'; i += 2) {
        s[i + 1] = ('a' + (s[i] - 'a' + s[i + 1] + 4) % 26);
    }
    return s;
}

int main() {
    char *ans = replaceDigits("a1b2c3d4e");
    puts(ans);
    return 0;
}
