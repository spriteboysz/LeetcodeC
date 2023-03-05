/**
 * Author: Deean
 * Date: 2023-03-05 17:22
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

static int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int fillCups(int *amount, int amountSize) {
    qsort(amount, amountSize, sizeof(int), cmp);
    if (amount[2] > amount[1] + amount[0]) {
        return amount[2];
    }
    return (amount[0] + amount[1] + amount[2] + 1) / 2;
}

int main() {
    int amount[] = {5, 4, 4};
    int ans = fillCups(amount, 3);
    printf("%d\n", ans);
    return 0;
}
