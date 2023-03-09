/**
 * Author: Deean
 * Date: 2023-03-08 22:25
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isThree(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cnt++;
        }
    }
    return cnt == 3;
}

int main() {
    int ans = isThree(4);
    printf("%d\n", ans);
    return 0;
}
