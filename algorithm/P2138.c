/**
 * Author: Deean
 * Date: 2023-03-06 21:55
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char **divideString(char *s, int k, char fill, int *returnSize) {
    int n = strlen(s);
    int rows = (n + k - 1) / k;
    char **res = (char **) malloc(sizeof(char *) * rows);
    for (int i = 0; i < rows; ++i) {
        res[i] = (char *) calloc(k + 1, sizeof(char));
        if (i == rows - 1) {
            memcpy(res[i], s + i * k, n - i * k);
            for (int j = 0; j < rows * k - n; ++j) {
                res[i][n - i * k + j] = fill;
            }
        } else {
            memcpy(res[i], s + i * k, k);
        }
    }
    *returnSize = rows;
    return res;
}

int main() {
    int n;
    char **ans = divideString("abcdefghij", 3, 'x', &n);
    for (int i = 0; i < n; ++i) {
        puts(ans[i]);
    }
    return 0;
}
