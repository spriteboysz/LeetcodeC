/**
 * Author: Deean
 * Date: 2023-03-04 13:42
 * FileName: algorithm
 * Description: 2481. 分割圆的最少切割次数
 */

#include "..\common\leetcode.h"

int numberOfCuts(int n) {
    if (n == 1) return 0;
    return n % 2 == 0 ? n / 2 : n;
}

int main() {
    int ans = numberOfCuts(4);
    printf("%d\n", ans);
    return 0;
}
