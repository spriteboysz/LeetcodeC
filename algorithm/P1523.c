/**
 * Author: Deean
 * Date: 2023-03-11 19:16
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countOdds(int low, int high) {
    return (high + 1) / 2 - low / 2;
}

int main() {
    int ans = countOdds(3, 7);
    printf("%d\n", ans);
    return 0;
}
