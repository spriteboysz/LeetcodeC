/**
 * Author: Deean
 * Date: 2023-03-05 15:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool digitCount(char *num) {
    int digit[10] = {0};
    for (int i = 0; i < strlen(num); ++i) {
        digit[num[i] - '0']++;
    }
    for (int i = 0; i < strlen(num); ++i) {
        if (num[i] - '0' != digit[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int ans = digitCount("1210");
    printf("%d\n", ans);
    return 0;
}
