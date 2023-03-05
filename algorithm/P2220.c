/**
 * Author: Deean
 * Date: 2023-03-04 19:27
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int minBitFlips(int start, int goal) {
    int n = start ^ goal, cnt = 0;
    while (n) {
        n &= (n - 1);
        cnt++;
    }
    return cnt;
}

int main() {
    int ans = minBitFlips(10, 7);
    printf("%d\n", ans);
    return 0;
}
