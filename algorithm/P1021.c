/**
 * Author: Deean
 * Date: 2023-03-14 21:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *removeOuterParentheses(char *s) {
    int n = strlen(s), level = 0, pos = 0;
    char *ss = (char *) malloc(sizeof(char) * (n + 1));
    for (int i = 0; i < n; ++i) {
        if (s[i] == ')') {
            level++;
        }
        if (level) ss[pos++] = s[i];
        if (s[i] == '(') {
            level--;
        }
    }
    ss[pos] = '\0';
    return ss;
}

int main() {
    char *ans = removeOuterParentheses("(()())(())");
    puts(ans);
    return 0;
}
