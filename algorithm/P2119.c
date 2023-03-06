/**
 * Author: Deean
 * Date: 2023-03-06 21:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isSameAfterReversals(int num) {
    return num == 0 || num % 10 != 0;
}

int main() {
    int ans = isSameAfterReversals(1800);
    printf("%d\n", ans);
    return 0;
}
