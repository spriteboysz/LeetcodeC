/**
 * Author: Deean
 * Date: 2022-10-22 22:44
 * FileName: algorithm/P1828.c
 * Description: 
 */

#include "..\common\leetcode.h"

int *countPoints(int **points, int pointsSize, int *pointsColSize, int **queries, int queriesSize, int *queriesColSize,
                 int *returnSize) {
    int *res = (int *) malloc(sizeof(int) * queriesSize);
    *returnSize = 0;
    int x, y, r, sum;
    for (int i = 0; i < queriesSize; i++) {
        sum = 0;
        x = queries[i][0];
        y = queries[i][1];
        r = queries[i][2];
        for (int j = 0; j < pointsSize; j++) {
            if ((points[j][0] - x) * (points[j][0] - x) + (points[j][1] - y) * (points[j][1] - y) <= r * r)
                sum++;
        }
        res[(*returnSize)++] = sum;
    }
    return res;
}

int main() {
    int points[5][2] = {{1, 1},
                      {2, 2},
                      {3, 3},
                      {4, 4},
                      {5, 5}};
    int queries[4][3] = {{1, 2, 2},
                       {2, 2, 2},
                       {4, 3, 2},
                       {4, 3, 3}};
    int returnSize[] = {};
    // countPoints(points, 5, 2, queries, 4, 3, returnSize)
}