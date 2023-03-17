/**
 * Author: Deean
 * Date: 2023-03-17 22:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *reverseOnlyLetters(char *s) {
    int left = 0, right = strlen(s) - 1;
    while (left < right) {
        if (!isalpha(s[left])) {
            left++;
            continue;
        }
        if (!isalpha(s[right])) {
            right--;
            continue;
        }
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    return s;
}

int main() {
    char *ans = reverseOnlyLetters("Test1ng-Leet=code-Q!");
    puts(ans);
    return 0;
}
