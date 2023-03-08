/**
 * Author: Deean
 * Date: 2023-03-08 21:44
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countTriples(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                if (i * i + j * j == k * k) {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int main() {
    int ans = countTriples(12);
    printf("%d\n", ans);
    return 0;
}
