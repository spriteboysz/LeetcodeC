/**
 * Author: Deean
 * Date: 2023-03-04 12:51
 * FileName: algorithm
 * Description: 2500. 删除每行中的最大值
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int deleteGreatestValue(int **grid, int gridSize, int *gridColSize) {
    for (int i = 0; i < gridSize; ++i) {
        qsort(grid[i], *gridColSize, sizeof(int), cmp);
    }
    int sum = 0;
    for (int i = 0; i < *gridColSize; ++i) {
        int temp = 0;
        for (int j = 0; j < gridSize; ++j) {
            temp = (int) fmax(temp, grid[j][i]);
        }
        sum += temp;
    }
    return sum;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,2,4],[3,3,1]]", ARRAY_INT);
    int m = 3;
    int ans = deleteGreatestValue(arrayValue(e), 2, &m);
    printf("%d\n", ans);
    return 0;
}
