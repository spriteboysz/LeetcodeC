/**
 * Author: Deean
 * Date: 2023-03-04 23:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *removeDigit(char *number, char digit) {
    int n = strlen(number);
    char *maximum = (char *) malloc(sizeof(char) * n);
    char *res = (char *) malloc(sizeof(char) * n);
    maximum[0] = '\0';
    res[0] = '\0';

    for (int i = 0; i < n; ++i) {
        if (number[i] == digit) {
            if (i != 0) memcpy(res, number, i);
            memcpy(res + i, number + i + 1, n - i - 1);
            res[n - 1] = '\0';
            if (strcmp(res, maximum) > 0) {
                memcpy(maximum, res, n - 1);
                maximum[n - 1] = '\0';
            }
        }
    }
    return maximum;
}

int main() {
    char *ans = removeDigit("1231", '1');
    puts(ans);
    return 0;
}
