/**
 * Author: Deean
 * Date: 2023-03-11 14:54
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maxScore(char *s) {
    int n = strlen(s), score = s[0] == '0';
    for (int i = 1; i < n; ++i) {
        if (s[i] == '1') score++;
    }
    int maximum = score;
    for (int i = 1; i < n - 1; ++i) {
        if (s[i] == '0') {
            score++;
        } else {
            score--;
        }
        maximum = fmax(maximum, score);
    }
    return maximum;
}

int main() {
    int ans = maxScore("011101");
    printf("%d\n", ans);
    return 0;
}
