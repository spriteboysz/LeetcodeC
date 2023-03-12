/**
 * Author: Deean
 * Date: 2023-03-12 10:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *reformat(char *s) {
    int n = strlen(s);
    char *s1 = (char *) malloc(sizeof(char) * (n + 1));
    char *s2 = (char *) malloc(sizeof(char) * (n + 1));
    int pos1 = 0, pos2 = 0;
    for (int i = 0; i < n; ++i) {
        if (isdigit(s[i])) {
            s1[pos1++] = s[i];
        } else {
            s2[pos2++] = s[i];
        }
    }

    s1[pos1] = '\0';
    s2[pos2] = '\0';
    int n1 = strlen(s1), n2 = strlen(s2);
    if (abs(n1 - n2) > 1) return "";
    if (n1 < n2) {
        char *temp = s1;
        s1 = s2;
        s2 = temp;
    }
    char *ss = (char *) malloc(sizeof(char) * (n + 1));
    int pos = 0;
    for (pos1 = 0, pos2 = 0; s1[pos1] != '\0' || s2[pos2] != '\0';) {
        if (s1[pos1] != '\0') ss[pos++] = s1[pos1++];
        if (s2[pos2] != '\0') ss[pos++] = s2[pos2++];
    }
    ss[pos] = '\0';
    free(s1);
    free(s2);
    return ss;
}

int main() {
    char *ans = reformat("covid2019");
    puts(ans);
    return 0;
}
