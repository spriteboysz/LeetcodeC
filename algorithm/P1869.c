/**
 * Author: Deean
 * Date: 2023-03-07 22:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool checkZeroOnes(char *s) {
    int cnt0 = 0, cnt1 = 0, max0 = 0, max1 = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == '1') {
            cnt1++;
            cnt0 = 0;
            max1 = fmax(max1, cnt1);
        } else {
            cnt0++;
            cnt1 = 0;
            max0 = fmax(max0, cnt0);
        }
    }
    return max1 > max0;
}

int main() {
    int ans = checkZeroOnes("111000");
    printf("%d\n", ans);
    return 0;
}
