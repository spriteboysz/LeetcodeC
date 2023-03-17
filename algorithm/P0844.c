/**
 * Author: Deean
 * Date: 2023-03-16 23:16
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *process(char *s) {
    int n = strlen(s);
    char *ss = (char *) malloc(sizeof(char) * (n + 1));
    int pos = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] != '#') {
            ss[pos++] = s[i];
        } else if (pos > 0) {
            pos--;
        }
    }
    ss[pos] = '\0';
    puts(ss);
    return ss;
}

bool backspaceCompare(char *s, char *t) {
    return strcmp(process(s), process(t)) == 0;
}

int main() {
    int ans = backspaceCompare("y#fo##f", "y#f#o##f");
    printf("%d\n", ans);
    return 0;
}
