/**
 * Author: Deean
 * Date: 2023-03-10 23:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define N 164

char *reformatNumber(char *number) {
    char *ans = malloc(N * sizeof(char));
    int i, k;
    for (k = 0, i = 0; number[i]; i++) {
        if (number[i] >= '0' && number[i] <= '9') {
            if ((k + 1) % 4 == 0)
                ans[k++] = '-';
            ans[k++] = number[i];
        }
    }
    if (ans[k - 2] == '-') {
        ans[k - 2] = ans[k - 3];
        ans[k - 3] = '-';
    }
    ans[k] = '\0';
    return ans;
}

int main() {
    char *ans = reformatNumber("1-23-45 6");
    puts(ans);
    return 0;
}
