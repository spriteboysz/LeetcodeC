/**
 * Author: Deean
 * Date: 2023-03-06 23:13
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char **cellsInRange(char *s, int *returnSize) {
    char col1 = s[0], col2 = s[3];
    int row1 = s[1], row2 = s[4];
    int pos = 0;
    char **cells = (char **) malloc(sizeof(char *) * 260);
    for (int j = col1; j <= col2; ++j) {
        for (int i = row1; i <= row2; ++i) {
            cells[pos] = (char *) malloc(sizeof(int) * 3);
            cells[pos][0] = j;
            cells[pos][1] = i;
            cells[pos][2] = '\0';
            pos++;
        }
    }
    *returnSize = pos;
    return cells;
}

int main() {
    int n;
    char **ans = cellsInRange("K1:L2", &n);
    for (int i = 0; i < n; ++i) {
        puts(ans[i]);
    }
    return 0;
}
