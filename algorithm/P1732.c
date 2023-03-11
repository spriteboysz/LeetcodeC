/**
 * Author: Deean
 * Date: 2023-03-11 13:16
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int largestAltitude(int *gain, int gainSize) {
    int maximum = 0, cur = 0;
    for (int i = 0; i < gainSize; ++i) {
        maximum = fmax(maximum, cur);
        cur += gain[i];
        maximum = fmax(maximum, cur);
    }
    return maximum;
}

int main() {
    int gain[] = {-5, 1, 5, 0, -7};
    int ans = largestAltitude(gain, 5);
    printf("%d\n", ans);
    return 0;
}
