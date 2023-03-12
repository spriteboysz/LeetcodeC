/**
 * Author: Deean
 * Date: 2023-03-12 16:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int numberOfSteps(int num) {
    int cnt = 0;
    while (num) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num -= 1;
        }
        cnt++;
    }
    return cnt;
}

int main() {
    int ans = numberOfSteps(14);
    printf("%d\n", ans);
    return 0;
}
