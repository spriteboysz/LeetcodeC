/**
 * Author: Deean
 * Date: 2023-05-05 21:32
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *toLowerCase(char *s) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    return s;
}

int main() {
    char *s = toLowerCase("Ly");
    for (int i = 0; s[i] != '\0'; ++i) {
        printf("%c", s[i]);
    }
    return 0;
}
