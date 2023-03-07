/**
 * Author: Deean
 * Date: 2023-03-06 22:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countOperations(int num1, int num2) {
    int cnt = 0;
    while (num1 != 0 && num2 != 0) {
        if (num1 >= num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
        cnt++;
    }
    return cnt;
}

int main() {
    int ans = countOperations(2, 3);
    printf("%d\n", ans);
    return 0;
}
