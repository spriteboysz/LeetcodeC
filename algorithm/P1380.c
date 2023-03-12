/**
 * Author: Deean
 * Date: 2023-03-12 12:58
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *luckyNumbers(int **matrix, int matrixSize, int *matrixColSize, int *returnSize) {
    int *minRow = (int *) malloc(sizeof(int) * matrixSize);
    int *maxCol = (int *) malloc(sizeof(int) * matrixColSize[0]);
    memset(minRow, 0x3f, sizeof(int) * matrixSize);
    memset(maxCol, 0, sizeof(int) * matrixColSize[0]);
    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < matrixColSize[i]; ++j) {
            minRow[i] = fmin(minRow[i], matrix[i][j]);
            maxCol[j] = fmax(maxCol[j], matrix[i][j]);
        }
    }

    int *lucky = (int *) malloc(sizeof(int) * matrixSize * matrixColSize[0]);
    int pos = 0;
    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < matrixColSize[i]; ++j) {
            if (matrix[i][j] == minRow[i] && matrix[i][j] == maxCol[j]) {
                lucky[pos++] = matrix[i][j];
            }
        }
    }
    *returnSize = pos;
    return lucky;
}

int main() {
    arrayEntry *e = arrayParse2D("[[3,7,8],[9,11,13],[15,16,17]]", ARRAY_INT);
    int colSize[] = {3, 3, 3};
    int n;
    int *ans = luckyNumbers(arrayValue(e), 3, colSize, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
