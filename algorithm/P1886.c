/**
 * Author: Deean
 * Date: 2023-03-07 23:04
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool findRotation(int **mat, int matSize, int *matColSize, int **target, int targetSize, int *targetColSize) {
    int n = targetSize, cnt0 = 1, cnt1 = 1, cnt2 = 1, cnt3 = 1;
    for (int i = 0; i < matSize; ++i) {
        for (int j = 0; j < targetSize; ++j) {
            int v = target[i][j];
            if (v != mat[i][j]) cnt0 = 0;
            if (v != mat[n - 1 - j][i]) cnt1 = 0;
            if (v != mat[n - 1 - i][n - 1 - j]) cnt2 = 0;
            if (v != mat[j][n - 1 - i]) cnt3 = 0;
        }
    }
    return cnt0 || cnt1 || cnt2 || cnt3;
}

int main() {
    arrayEntry *e1 = arrayParse2D("[[0,1],[1,0]]", ARRAY_INT);
    arrayEntry *e2 = arrayParse2D("[[1,0],[0,1]]", ARRAY_INT);
    int colSize[] = {2, 2};
    int ans = findRotation(arrayValue(e1), 2, colSize, arrayValue(e2), 2, colSize);
    printf("%d\n", ans);
    return 0;
}
