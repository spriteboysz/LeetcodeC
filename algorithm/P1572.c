/**
 * Author: Deean
 * Date: 2023-03-11 21:33
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int diagonalSum(int **mat, int matSize, int *matColSize) {
    int sum = 0;
    for (int i = 0; i < matSize; ++i) {
        sum += mat[i][i];
        if (i != matSize - i - 1) {
            sum += mat[i][matColSize[i] - i - 1];
        }
    }
    return sum;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,2,3],[4,5,6],[7,8,9]]", ARRAY_INT);
    int colSize[] = {3, 3, 3};
    int ans = diagonalSum(arrayValue(e), 3, colSize);
    printf("%d\n", ans);
    return 0;
}
