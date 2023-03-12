/**
 * Author: Deean
 * Date: 2023-03-12 16:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countNegatives(int **grid, int gridSize, int *gridColSize) {
    int cnt = 0;
    for (int i = 0; i < gridSize; ++i) {
        for (int j = 0; j < gridColSize[i]; ++j) {
            if (grid[i][j] < 0) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    arrayEntry *e = arrayParse2D("[[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]", ARRAY_INT);
    int colSize[] = {4, 4, 4, 4};
    int ans = countNegatives(arrayValue(e), 4, colSize);
    printf("%d\n", ans);
    return 0;
}
