/**
 * Author: Deean
 * Date: 2023-03-05 19:46
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int minimumMoves(char *s) {
    int covered = -1, cnt = 0;
    for (int i = 0; i < strlen(s); ++i) {
        if (s[i] == 'X' && i > covered) {
            cnt++;
            covered = i + 2;
        }
    }
    return cnt;
}

int main() {
    int ans = minimumMoves("XXOX");
    printf("%d\n", ans);
    return 0;
}
