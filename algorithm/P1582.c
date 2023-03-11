/**
 * Author: Deean
 * Date: 2023-03-11 21:46
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int numSpecial(int **mat, int matSize, int *matColSize) {
    int m = matSize, n = matColSize[0];
    int *rows = (int *) malloc(sizeof(int) * m);
    int *cols = (int *) malloc(sizeof(int) * n);
    memset(rows, 0, sizeof(int) * m);
    memset(cols, 0, sizeof(int) * n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            rows[i] += mat[i][j];
            cols[j] += mat[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mat[i][j] == 1 && rows[i] == 1 && cols[j] == 1) {
                cnt++;
            }
        }
    }
    free(rows);
    free(cols);
    return cnt;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,0,0],[0,0,1],[1,0,0]]", ARRAY_INT);
    int colSize[] = {3, 3, 3};
    int ans = numSpecial(arrayValue(e), 3, colSize);
    printf("%d\n", ans);
    return 0;
}
