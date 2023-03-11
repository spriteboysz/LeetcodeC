/**
 * Author: Deean
 * Date: 2023-03-11 13:07
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countGoodRectangles(int **rectangles, int rectanglesSize, int *rectanglesColSize) {
    int *sides = (int *) malloc(sizeof(int) * rectanglesSize);
    for (int i = 0; i < rectanglesSize; ++i) {
        sides[i] = fmin(rectangles[i][0], rectangles[i][rectanglesColSize[i] - 1]);
    }
    int maximum = 0, cnt = 0;
    for (int i = 0; i < rectanglesSize; ++i) {
        maximum = fmax(maximum, sides[i]);
    }
    for (int i = 0; i < rectanglesSize; ++i) {
        if (sides[i] == maximum) {
            cnt++;
        }
    }
    free(sides);
    return cnt;
}

int main() {
    arrayEntry *e = arrayParse2D("[[5,8],[3,9],[5,12],[16,5]]", ARRAY_INT);
    int colSize[] = {2, 2, 2, 2};
    int ans = countGoodRectangles(arrayValue(e), 4, colSize);
    printf("%d\n", ans);
    return 0;
}
