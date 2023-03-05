/**
 * Author: Deean
 * Date: 2023-03-05 16:43
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool checkXMatrix(int **grid, int gridSize, int *gridColSize) {
    for (int i = 0; i < gridSize; ++i) {
        for (int j = 0; j < gridColSize[i]; ++j) {
            if (i == j || i + j == gridSize - 1) {
                if (grid[i][j] == 0) {
                    return false;
                }
            } else if (grid[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    arrayEntry *e = arrayParse2D("[[2,0,0,1],[0,3,1,0],[0,5,2,0],[4,0,0,2]]", ARRAY_INT);
    int cols[] = {4, 4, 4, 4};
    int ans = checkXMatrix(arrayValue(e), 4, cols);
    printf("%d\n", ans);
    return 0;
}
