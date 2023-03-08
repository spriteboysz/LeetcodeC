/**
 * Author: Deean
 * Date: 2023-03-07 21:55
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *truncateSentence(char *s, int k) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (k == 0) {
            s[i - 1] = '\0';
            break;
        }
        if (s[i] == ' ') {
            k--;
        }
    }
    return s;
}

int main() {
    char *ans = truncateSentence("Hello how are you Contestant", 4);
    puts(ans);
    return 0;
}
