/**
 * Author: Deean
 * Date: 2023-03-12 20:44
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int balancedStringSplit(char *s) {
    int cnt = 0, balance = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == 'R') {
            balance++;
        } else {
            balance--;
        }
        if (balance == 0) cnt++;
    }
    return cnt;
}

int main() {
    int ans = balancedStringSplit("RLRRLLRLRL");
    printf("%d\n", ans);
    return 0;
}
