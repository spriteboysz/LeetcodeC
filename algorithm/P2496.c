/**
 * Author: Deean
 * Date: 2023-03-04 13:09
 * FileName: algorithm
 * Description: 2496. 数组中字符串的最大值
 */

#include "..\common\leetcode.h"

int maximumValue(char **strs, int strsSize) {
    int maximum = 0;
    for (int i = 0; i < strsSize; ++i) {
        int temp = 0;
        for (int j = 0; j < strlen(strs[i]); ++j) {
            if (strs[i][j] >= 'a' && strs[i][j] <= 'z') {
                temp = strlen(strs[i]);
                break;
            } else {
                temp = temp * 10 + strs[i][j] - '0';
            }
        }
        maximum = (int) fmax(maximum, temp);
    }
    return maximum;
}

int main() {
    char **strs = {"alic3", "bob", "3", "4", "00000"};
    int ans = maximumValue(strs, 5);
    printf("%d\n", ans);
    return 0;
}
