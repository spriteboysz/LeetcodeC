/**
 * Author: Deean
 * Date: 2023-03-15 22:14
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *addToArrayForm(int *num, int numSize, int k, int *returnSize) {
    int *sum = (int *) malloc(sizeof(int) * fmax(10, numSize + 1));
    int pos = 0;
    for (int i = numSize - 1; i >= 0 || k > 0; --i) {
        if (i >= 0) k += num[i];
        sum[pos++] = k % 10;
        k /= 10;
    }
    for (int i = 0; i < pos / 2; ++i) {
        int temp = sum[i];
        sum[i] = sum[pos - 1 - i];
        sum[pos - 1 - i] = temp;
    }
    *returnSize = pos;
    return sum;
}

int main() {
    int num[] = {2, 1, 5};
    int n;
    int *ans = addToArrayForm(num, 3, 806, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d", ans[i]);
    }
    return 0;
}
