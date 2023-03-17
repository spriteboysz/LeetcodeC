/**
 * Author: Deean
 * Date: 2023-03-17 21:59
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int projectionArea(int **grid, int gridSize, int *gridColSize) {
    int area1 = 0, area2 = 0, area3 = 0;
    for (int i = 0; i < gridSize; ++i) {
        int row = 0, col = 0;
        for (int j = 0; j < gridColSize[i]; ++j) {
            area1 += grid[i][j] != 0 ? 1 : 0;
            row = fmax(row, grid[i][j]);
            col = fmax(col, grid[j][i]);
        }
        area2 += row;
        area3 += col;
    }
    return area1 + area2 + area3;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,2],[3,4]]", ARRAY_INT);
    int colSize[] = {2, 2};
    int ans = projectionArea(arrayValue(e), 2, colSize);
    printf("%d\n", ans);
    return 0;
}
