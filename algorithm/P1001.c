/**
 * Author: Deean
 * Date: 2023-03-14 22:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int bitwiseComplement(int n) {
    if (n == 0) return 1;
    int k = 0;
    while (1 << k <= n) {
        k++;
    }
    return (1 << k) - 1 - n;
}

int main() {
    int ans = bitwiseComplement(5);
    printf("%d\n", ans);
    return 0;
}
