/**
 * Author: Deean
 * Date: 2023-03-05 16:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countAsterisks(char *s) {
    bool flag = true;
    int cnt = 0;
    for (int i = 0; i < strlen(s); ++i) {
        if (s[i] == '|') flag = !flag;
        if (flag && s[i] == '*') {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int ans = countAsterisks("l|*e*et|c**o|*de|");
    printf("%d\n", ans);
    return 0;
}
