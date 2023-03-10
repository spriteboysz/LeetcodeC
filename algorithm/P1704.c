/**
 * Author: Deean
 * Date: 2023-03-10 23:27
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isVowel(char c) {
    char *vowels = "aeiouAEIOU";
    for (int i = 0; i < 10; ++i) {
        if (vowels[i] == c) return true;
    }
    return false;
}

bool halvesAreAlike(char *s) {
    int n = strlen(s), cnt = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (isVowel(s[i])) cnt++;
        if (isVowel(s[n / 2 + i])) cnt--;
    }
    return cnt == 0;
}

int main() {
    int ans = halvesAreAlike("book");
    printf("%d\n", ans);
    return 0;
}
