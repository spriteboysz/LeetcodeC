/**
 * Author: Deean
 * Date: 2023-03-08 23:04
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int minTimeToType(char *word) {
    int cnt = 0, n = strlen(word);
    char pre = 'a';
    for (int i = 0; i < n; ++i) {
        int dis = abs(word[i] - pre);
        cnt += fmin(dis, 26 - dis);
        pre = word[i];
    }
    return cnt + n;
}

int main() {
    int ans = minTimeToType("bza");
    printf("%d\n", ans);
    return 0;
}
