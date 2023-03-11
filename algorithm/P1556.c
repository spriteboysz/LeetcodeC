/**
 * Author: Deean
 * Date: 2023-03-11 20:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *thousandSeparator(int n) {
    if (n == 0) return "0";
    char *res = calloc(20, sizeof(char));
    int i = 0, j = 0, temp = n;
    while (temp) {
        if (j % 3 == 0 && j != 0) {
            res[i++] = '.';
        }
        res[i++] = (temp % 10) + '0';
        j++;
        temp /= 10;
    }
    int k = strlen(res);
    for (i = 0; i < k / 2; ++i) {
        temp = res[i];
        res[i] = res[k - i - 1];
        res[k - i - 1] = temp;
    }
    return res;
}

int main() {
    char *ans = thousandSeparator(123456789);
    puts(ans);
    return 0;
}
