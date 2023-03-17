/**
 * Author: Deean
 * Date: 2023-03-17 21:07
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool buddyStrings(char *s, char *goal) {
    int n1 = strlen(s), n2 = strlen(goal);
    if (n1 != n2) return false;
    int c1, c2, cnt = 0;
    for (int i = 0; i < n1; ++i) {
        if (s[i] != goal[i]) {
            if (cnt == 0) {
                c1 = i;
                cnt++;
            } else if (cnt == 1) {
                c2 = i;
                cnt++;
            } else {
                return false;
            }
        }
    }
    if (cnt == 1) return false;
    if (cnt == 2) {
        return s[c1] == goal[c2] && s[c2] == goal[c1];
    }
    int hash[26] = {0};
    for (int i = 0; i < n1; ++i) {
        hash[s[i] - 'a']++;
        if (hash[s[i] - 'a'] >= 2) {
            return true;
        }
    }
    return false;
}

int main() {
    int ans = buddyStrings("ab", "ba");
    printf("%d\n", ans);
    return 0;
}
