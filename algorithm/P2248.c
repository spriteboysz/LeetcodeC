/**
 * Author: Deean
 * Date: 2023-03-04 23:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *intersection(int **nums, int numsSize, int *numsColSize, int *returnSize) {
    int number[1001] = {0};
    for (int i = 0; i < numsSize; ++i) {
        for (int j = 0; j < numsColSize[i]; ++j) {
            number[nums[i][j]]++;
        }
    }
    int *inter = (int *) malloc(sizeof(int) * 1001);
    int index = 0;
    for (int i = 0; i < 1001; ++i) {
        if (number[i] == numsSize) {
            inter[index++] = i;
        }
    }
    *returnSize = index;
    return inter;
}

int main() {
    arrayEntry *e = arrayParse2D("[[3,1,2,4,5],[1,2,3,4,10],[3,4,5,6,7]]", ARRAY_INT);
    int m = 5, n = 2;
    int *ans = intersection(arrayValue(e), 3, &m, &n);
    puts(arrayToString1D(ans, 2, ARRAY_INT));
    return 0;
}
