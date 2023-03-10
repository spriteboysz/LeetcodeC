/**
 * Author: Deean
 * Date: 2023-03-10 22:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maximumWealth(int **accounts, int accountsSize, int *accountsColSize) {
    int maximum = 0;
    for (int i = 0; i < accountsSize; ++i) {
        int sum = 0;
        for (int j = 0; j < accountsColSize[i]; ++j) {
            sum += accounts[i][j];
        }
        maximum = fmax(maximum, sum);
    }
    return maximum;
}

int main() {
    arrayEntry *e = arrayParse2D("[[2,8,7],[7,1,3],[1,9,5]]", ARRAY_INT);
    int colSize[] = {3, 3, 3};
    int ans = maximumWealth(arrayValue(e), 3, colSize);
    printf("%d\n", ans);
    return 0;
}
