/**
 * Author: Deean
 * Date: 2023-03-04 10:18
 * FileName: algorithm
 * Description: 2544. 交替数字和
 */

#include "..\common\leetcode.h"

int alternateDigitSum(int n) {
    int sum = 0, flag = 1, cnt = 0;
    while (n) {
        cnt++;
        sum += flag * (n % 10);
        flag *= -1;
        n /= 10;
    }
    return cnt % 2 ? sum : -sum;
}

int main() {
    int ans = alternateDigitSum(886996);
    printf("%d\n", ans);
    return 0;
}
