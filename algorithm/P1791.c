/**
 * Author: Deean
 * Date: 2023-03-07 21:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int findCenter(int **edges, int edgesSize, int *edgesColSize) {
    if (edges[0][0] == edges[edgesSize - 1][0] || edges[0][0] == edges[edgesSize - 1][edgesColSize[1] - 1]) {
        return edges[0][0];
    }
    return edges[0][1];
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,2],[2,3],[4,2]]", ARRAY_INT);
    int edgesColSize[] = {2, 2, 2};
    int ans = findCenter(arrayValue(e), 3, edgesColSize);
    printf("%d\n", ans);
    return 0;
}
