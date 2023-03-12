/**
 * Author: Deean
 * Date: 2023-03-12 20:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool checkStraightLine(int **coordinates, int coordinatesSize, int *coordinatesColSize) {
    int dx = coordinates[0][0], dy = coordinates[0][1];
    for (int i = 0; i < coordinatesSize; ++i) {
        coordinates[i][0] -= dx;
        coordinates[i][1] -= dy;
    }
    int a = coordinates[1][1], b = coordinates[1][0];
    for (int i = 1; i < coordinatesSize; ++i) {
        int x = coordinates[i][0], y = coordinates[i][coordinatesColSize[i] - 1];
        if (a * x - b * y != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]", ARRAY_INT);
    int colSize[] = {2, 2, 2, 2, 2, 2};
    int ans = checkStraightLine(arrayValue(e), 6, colSize);
    printf("%d\n", ans);
    return 0;
}
