/**
 * Author: Deean
 * Date: 2023-03-06 22:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool check(int num) {
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum % 2 == 0;
}

int countEven(int num) {
    int cnt = 0;
    for (int i = 1; i <= num; ++i) {
        if (check(i)) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int ans = countEven(30);
    printf("%d\n", ans);
    return 0;
}
