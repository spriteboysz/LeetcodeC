/**
 * Author: Deean
 * Date: 2023-03-12 17:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool check(int num) {
    while (num) {
        if (num % 10 == 0) return false;
        num /= 10;
    }
    return true;
}

int *getNoZeroIntegers(int n, int *returnSize) {
    int *ret = (int *) malloc(sizeof(int) * 2);
    for (int i = 1; i < n; ++i) {
        if (check(i) && check(n - i)) {
            ret[0] = i;
            ret[1] = n - i;
            break;
        }
    }
    *returnSize = 2;
    return ret;
}

int main() {
    int n;
    int *ans = getNoZeroIntegers(1010, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
