/**
 * Author: Deean
 * Date: 2023-03-06 21:43
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool checkValid(int **matrix, int matrixSize, int *matrixColSize) {
    int rows[10000] = {0}, cols[10000] = {0};
    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < matrixColSize[i]; ++j) {
            rows[matrix[i][j]]++;
            cols[matrix[j][i]]++;
        }
        for (int k = 1; k < matrixSize; ++k) {
            if (rows[k] != i + 1) return false;
            if (cols[k] != i + 1) return false;
        }
    }
    return true;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,2,3],[3,1,2],[2,3,1]]", ARRAY_INT);
    int matrixColSize[] = {3, 3, 3};
    int ans = checkValid(arrayValue(e), 3, matrixColSize);
    printf("%d\n", ans);
    return 0;
}
