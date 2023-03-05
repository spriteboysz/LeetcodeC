/**
 * Author: Deean
 * Date: 2023-03-05 15:45
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int percentageLetter(char *s, char letter) {
    int n = strlen(s), cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == letter) {
            cnt++;
        }
    }
    return 100 * cnt / n;
}

int main() {
    int ans = percentageLetter("foobar", 'o');
    printf("%d\n", ans);
    return 0;
}
