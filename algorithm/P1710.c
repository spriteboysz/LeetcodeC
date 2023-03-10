/**
 * Author: Deean
 * Date: 2023-03-10 23:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *pa, const void *pb) {
    return (*(int **) pb)[1] - (*(int **) pa)[1];
}

int maximumUnits(int **boxTypes, int boxTypesSize, int *boxTypesColSize, int truckSize) {
    qsort(boxTypes, boxTypesSize, sizeof(int *), cmp);
    int cnt = 0;
    for (int i = 0; i < boxTypesSize; ++i) {
        int num = boxTypes[i][0], unit = boxTypes[i][boxTypesColSize[i] - 1];
        if (num < truckSize) {
            cnt += num * unit;
            truckSize -= num;
        } else {
            cnt += truckSize * unit;
            break;
        }
    }
    return cnt;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,3],[2,2],[3,1]]", ARRAY_INT);
    int colSize[] = {2, 2, 2};
    int ans = maximumUnits(arrayValue(e), 3, colSize, 4);
    printf("%d\n", ans);
    return 0;
}
