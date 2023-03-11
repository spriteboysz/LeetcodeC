/**
 * Author: Deean
 * Date: 2023-03-11 20:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *mostVisited(int n, int *rounds, int roundsSize, int *returnSize) {
    int *res = (int *) malloc(sizeof(int) * n);
    int pos = 0, start = rounds[0], end = rounds[roundsSize - 1];
    if (end >= start) {
        for (int i = start; i <= end; ++i) {
            res[pos++] = i;
        }
    } else {
        for (int i = 1; i <= end; ++i) {
            res[pos++] = i;
        }
        for (int i = start; i <= n; ++i) {
            res[pos++] = i;
        }
    }
    *returnSize = pos;
    return res;
}

int main() {
    int rounds[] = {1, 3, 1, 2};
    int n;
    int *ans = mostVisited(4, rounds, 4, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
