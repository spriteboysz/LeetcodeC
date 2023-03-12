/**
 * Author: Deean
 * Date: 2023-03-12 20:24
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int oddCells(int m, int n, int **indices, int indicesSize, int *indicesColSize) {
    int *matrix = (int *) malloc(sizeof(int) * m * n);
    memset(matrix, 0, sizeof(int) * m * n);
    for (int i = 0; i < indicesSize; ++i) {
        for (int j = 0; j < n; ++j) {
            *(matrix + indices[i][0] * n + j) += 1;
        }
        for (int j = 0; j < m; ++j) {
            *(matrix + j * n + indices[i][indicesColSize[i] - 1]) += 1;
        }
    }
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += *(matrix + i * n + j) % 2 ? 1 : 0;
        }
    }
    free(matrix);
    return sum;
}

int main() {
    arrayEntry *e = arrayParse2D("[[0,1],[1,1]]", ARRAY_INT);
    int colSize[] = {2, 2};
    int ans = oddCells(2, 3, arrayValue(e), 2, colSize);
    printf("%d\n", ans);
    return 0;
}
