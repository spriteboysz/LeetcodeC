/**
 * Author: Deean
 * Date: 2023-03-11 15:06
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool *kidsWithCandies(int *candies, int candiesSize, int extraCandies, int *returnSize) {
    int maximum = 0;
    for (int i = 0; i < candiesSize; ++i) {
        maximum = fmax(maximum, candies[i]);
    }
    bool *res = (bool *) malloc(sizeof(bool) * candiesSize);
    for (int i = 0; i < candiesSize; ++i) {
        res[i] = candies[i] + extraCandies >= maximum;
    }
    *returnSize = candiesSize;
    return res;
}

int main() {
    int candies[] = {2, 3, 5, 1, 3};
    int n;
    bool *ans = kidsWithCandies(candies, 5, 3, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
