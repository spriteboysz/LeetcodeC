/**
 * Author: Deean
 * Date: 2023-03-10 23:12
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int numberOfMatches(int n) {
    int cnt = 0;
    while (n > 1) {
        if (n % 2 == 0) {
            cnt += n / 2;
            n /= 2;
        } else {
            cnt += (n - 1) / 2;
            n = (n - 1) / 2 + 1;
        }
    }
    return cnt;
}

int main() {
    int ans = numberOfMatches(14);
    printf("%d\n", ans);
    return 0;
}
