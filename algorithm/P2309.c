/**
 * Author: Deean
 * Date: 2023-03-05 16:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *greatestLetter(char *s) {
    int alphabet[26] = {0};
    for (int i = 0; i < strlen(s); ++i) {
        if (islower(s[i])) {
            alphabet[s[i] - 'a'] |= 1;
        } else {
            alphabet[s[i] - 'A'] |= 2;
        }
    }
    for (int i = 25; i >= 0; i--) {
        if (alphabet[i] == 3) {
            char *ss = (char *) malloc(sizeof(char) * 2);
            ss[0] = i + 'A';
            ss[1] = '\0';
            return ss;
        }
    }
    return "";
}

int main() {
    char *s = "arRAzFif";
    char *ans = greatestLetter(s);
    puts(ans);
    return 0;
}
