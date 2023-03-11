/**
 * Author: Deean
 * Date: 2023-03-11 17:24
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int xorOperation(int n, int start) {
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans ^= (start + i * 2);
    }
    return ans;
}

int main() {
    int ans = xorOperation(5, 0);
    printf("%d\n", ans);
    return 0;
}
