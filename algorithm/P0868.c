/**
 * Author: Deean
 * Date: 2023-03-17 21:31
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int binaryGap(int n) {
    int last = -1, maximum = 0;
    for (int i = 0; n; ++i) {
        if (n & 1) {
            if (last != -1) {
                maximum = fmax(maximum, i - last);
            }
            last = i;
        }
        n >>= 1;
    }
    return maximum;
}

int main() {
    int ans = binaryGap(22);
    printf("%d\n", ans);
    return 0;
}
