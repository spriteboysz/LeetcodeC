/**
 * Author: Deean
 * Date: 2023-03-11 17:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *finalPrices(int *prices, int pricesSize, int *returnSize) {
    int *final = (int *) malloc(sizeof(int) * pricesSize);
    for (int i = 0; i < pricesSize; ++i) {
        final[i] = prices[i];
        for (int j = i + 1; j < pricesSize; ++j) {
            if (prices[j] <= prices[i]) {
                final[i] = prices[i] - prices[j];
                break;
            }
        }
    }
    *returnSize = pricesSize;
    return final;
}

int main() {
    int prices[] = {8, 4, 6, 2, 3};
    int n;
    int *ans = finalPrices(prices, 5, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
