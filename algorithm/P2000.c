/**
 * Author: Deean
 * Date: 2023-03-05 19:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *reversePrefix(char *word, char ch) {
    char *p2 = strchr(word, ch);
    if (p2 != NULL) {
        char *p1 = word;
        while (p1 < p2) {
            char temp = *p1;
            *p1 = *p2;
            *p2 = temp;
            p1++;
            p2--;
        }
    }
    return word;
}

int main() {
    char *ans = reversePrefix("abcdefd", 'd');
    puts(ans);
    return 0;
}
