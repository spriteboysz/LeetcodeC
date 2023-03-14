/**
 * Author: Deean
 * Date: 2023-03-14 21:22
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int lastStoneWeight(int *stones, int stonesSize) {
    qsort(stones, stonesSize, sizeof(int), cmp);
    int tail = stonesSize - 2;
    while (tail >= 0) {
        stones[tail] = stones[tail + 1] - stones[tail];
        qsort(stones, stonesSize, sizeof(int), cmp);
        tail--;
    }
    return stones[0];
}

int main() {
    int stones[] = {2, 7, 4, 1, 8, 8};
    int ans = lastStoneWeight(stones, 6);
    printf("%d\n", ans);
    return 0;
}
