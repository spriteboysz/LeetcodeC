/**
 * Author: Deean
 * Date: 2023-03-07 22:11
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int sumBase(int n, int k) {
    int sum = 0;
    while (n) {
        sum += n % k;
        n /= k;
    }
    return sum;
}

int main() {
    int ans = sumBase(34, 6);
    printf("%d\n", ans);
    return 0;
}
