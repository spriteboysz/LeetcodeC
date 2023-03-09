/**
 * Author: Deean
 * Date: 2023-03-09 22:46
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maxDepth(char *s) {
    int maximum = 0, depth = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            depth++;
        }
        maximum = fmax(maximum, depth);
        if (s[i] == ')') {
            depth--;
        }
    }
    return maximum;
}

int main() {
    int ans = maxDepth("(1)+((2))+(((3)))");
    printf("%d\n", ans);
    return 0;
}
