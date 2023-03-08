/**
 * Author: Deean
 * Date: 2023-03-07 23:13
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MAX_VAL 51

bool isCovered(int **ranges, int rangesSize, int *rangesColSize, int left, int right) {
    int number[MAX_VAL] = {0};
    for (int i = 0; i < rangesSize; ++i) {
        for (int j = ranges[i][0]; j <= ranges[i][rangesColSize[i] - 1]; ++j) {
            number[j]++;
        }
    }
    for (int i = left; i <= right; ++i) {
        if (number[i] == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,2],[3,4],[5,6]]", ARRAY_INT);
    int colSize[] = {2, 2, 2};
    int ans = isCovered(arrayValue(e), 3, colSize, 2, 5);
    printf("%d\n", ans);
    return 0;
}
