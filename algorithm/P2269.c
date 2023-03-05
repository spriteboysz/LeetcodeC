/**
 * Author: Deean
 * Date: 2023-03-05 10:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int divisorSubstrings(int num, int k) {
    char s[11];
    sprintf(s, "%d", num);
    int cnt = 0, n = strlen(s);
    for (int i = 0; i + k - 1 < n; ++i) {
        char sub[k + 1];
        strncpy(sub, s + i, k);
        sub[k] = '\0';
        if (atoi(sub) != 0 && num % atoi(sub) == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int ans = divisorSubstrings(430043, 2);
    printf("%d\n", ans);
    return 0;
}
