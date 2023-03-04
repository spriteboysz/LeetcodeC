/**
 * Author: Deean
 * Date: 2023-03-04 17:21
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int commonFactors(int a, int b) {
    int cnt = 0, minimum = fmin(a, b);
    for (int i = 1; i <= minimum; ++i) {
        if (a % i == 0 && b % i == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int ans = commonFactors(12, 6);
    printf("%d\n", ans);
    return 0;
}
