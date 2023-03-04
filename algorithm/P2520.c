/**
 * Author: Deean
 * Date: 2023-03-04 12:09
 * FileName: algorithm
 * Description: 2520. 统计能整除数字的位数
 */

#include "..\common\leetcode.h"

int countDigits(int num) {
    int cnt = 0, n = num;
    while (n) {
        int digit = n % 10;
        n /= 10;
        if (num % digit == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    printf("%d\n", countDigits(121));
    printf("%d\n", countDigits(1248));
    return 0;
}
