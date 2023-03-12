/**
 * Author: Deean
 * Date: 2023-03-12 16:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int *kWeakestRows(int **mat, int matSize, int *matColSize, int k, int *returnSize) {
    int *soldiers = (int *) malloc(sizeof(int) * matSize);
    for (int i = 0; i < matSize; ++i) {
        int sum = 0;
        for (int j = 0; j < matColSize[i]; ++j) {
            sum += mat[i][j];
        }
        soldiers[i] = sum * matSize + i;
    }
    qsort(soldiers, matSize, sizeof(int), cmp);
    for (int i = 0; i < matSize; ++i) {
        soldiers[i] %= matSize;
    }
    *returnSize = k;
    return soldiers;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,1,0,0,0],[1,1,1,1,0],[1,0,0,0,0],[1,1,0,0,0],[1,1,1,1,1]]", ARRAY_INT);
    int colSize[] = {5, 5, 5, 5, 5};
    int n;
    int *ans = kWeakestRows(arrayValue(e), 5, colSize, 3, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
