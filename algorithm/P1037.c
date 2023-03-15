/**
 * Author: Deean
 * Date: 2023-03-14 21:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isBoomerang(int **points, int pointsSize, int *pointsColSize) {
    int x0 = points[0][0], y0 = points[0][1];
    int x1 = points[1][0], y1 = points[1][1];
    int x2 = points[2][0], y2 = points[pointsSize - 1][pointsColSize[2] - 1];
    int v1[2] = {x1 - x0, y1 - y0};
    int v2[2] = {x2 - x0, y2 - y0};
    return v1[0] * v2[1] - v1[1] * v2[0] != 0;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,1],[2,3],[3,2]]", ARRAY_INT);
    int colSize[] = {2, 2, 2};
    int ans = isBoomerang(arrayValue(e), 3, colSize);
    printf("%d\n", ans);
    return 0;
}
