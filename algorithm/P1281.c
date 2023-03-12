/**
 * Author: Deean
 * Date: 2023-03-12 18:02
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int subtractProductAndSum(int n) {
    int sum = 0, product = 1;
    while (n) {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }
    // printf("%d, %d\n", sum, product);
    return product - sum;
}

int main() {
    int ans = subtractProductAndSum(4421);
    printf("%d\n", ans);
    return 0;
}
