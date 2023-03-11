/**
 * Author: Deean
 * Date: 2023-03-11 14:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int nearestValidPoint(int x, int y, int **points, int pointsSize, int *pointsColSize) {
    int index = -1, distance = INT_MAX;
    for (int i = 0; i < pointsSize; ++i) {
        int a = points[i][0], b = points[i][1];
        int cur = abs(a - x) + abs(b - y);
        if ((x == a || y == b) && cur < distance) {
            distance = cur;
            index = i;
        }
    }
    return index;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,2],[3,1],[2,4],[2,3],[4,4]]", ARRAY_INT);
    int colSize[] = {2, 2, 2, 2, 2};
    int ans = nearestValidPoint(3, 4, arrayValue(e), 5, colSize);
    printf("%d\n", ans);
    return 0;
}
