/**
 * Author: Deean
 * Date: 2023-03-10 23:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int totalMoney(int n) {
    int week = 1, day = 1, sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += week + day - 1;
        day++;
        if (day == 8) {
            day = 1;
            week++;
        }
    }
    return sum;
}

int main() {
    int ans = totalMoney(10);
    printf("%d\n", ans);
    return 0;
}
