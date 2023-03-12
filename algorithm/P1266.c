/**
 * Author: Deean
 * Date: 2023-03-12 20:13
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int minTimeToVisitAllPoints(int **points, int pointsSize, int *pointsColSize) {
    int sum = 0;
    for (int i = 1; i < pointsSize; ++i) {
        sum += fmax(abs(points[i][0] - points[i-1][0]), abs(points[i][1] - points[i - 1][pointsColSize[i] - 1]));
    }
    return sum;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,1],[3,4],[-1,0]]", ARRAY_INT);
    int colSize[] = {2, 2, 2};
    int ans = minTimeToVisitAllPoints(arrayValue(e), 3, colSize);
    printf("%d\n", ans);
    return 0;
}
