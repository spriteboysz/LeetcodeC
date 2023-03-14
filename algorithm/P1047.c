/**
 * Author: Deean
 * Date: 2023-03-14 21:04
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *removeDuplicates(char *s) {
    int n = strlen(s);
    char *stack = (char *) malloc(sizeof(char) * (n + 1));
    int pos = 0;
    for (int i = 0; i < n; ++i) {
        if (pos == 0 || stack[pos - 1] != s[i]) {
            stack[pos++] = s[i];
        } else {
            pos--;
        }
    }
    stack[pos] = '\0';
    return stack;
}

int main() {
    char *ans = removeDuplicates("abbaca");
    puts(ans);
    return 0;
}
