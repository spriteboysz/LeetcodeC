/**
 * Author: Deean
 * Date: 2023-03-04 10:15
 * FileName: algorithm
 * Description: 2549. 统计桌面上的不同数字
 */

#include "..\common\leetcode.h"

int distinctIntegers(int n) {
    return n == 1 ? 1 : n - 1;
}


int main() {
    int ans = distinctIntegers(5);
    printf("%d", ans);
    return 0;
}
