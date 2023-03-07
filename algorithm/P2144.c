/**
 * Author: Deean
 * Date: 2023-03-06 22:13
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) b - *(int *) a;
}

int minimumCost(int *cost, int costSize) {
    qsort(cost, costSize, sizeof(int), cmp);
    int sum = 0;
    for (int i = 0; i < costSize; ++i) {
        if (i % 3 != 2) {
            sum += cost[i];
        }
    }
    return sum;
}

int main() {
    int cost[] = {6, 5, 7, 9, 2, 2};
    int ans = minimumCost(cost, 6);
    printf("%d\n", ans);
    return 0;
}
