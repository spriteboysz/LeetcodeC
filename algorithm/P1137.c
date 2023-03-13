/**
 * Author: Deean
 * Date: 2023-03-12 23:14
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int tribonacci(int n) {
    if (n == 0) return 0;
    if (n <= 2) return 1;
    int p = 0, q = 0, r = 1, s = 1;
    for (int i = 3; i <= n; ++i) {
        p = q;
        q = r;
        r = s;
        s = p + q + r;
    }
    return s;
}

int main() {
    int ans = tribonacci(25);
    printf("%d\n", ans);
    return 0;
}
