/**
 * Author: Deean
 * Date: 2023-03-12 11:30
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

# define MAX_VAL 46

int countLargestGroup(int n) {
    int hash[MAX_VAL] = {0,};
    for (int i = 1; i <= n; ++i) {
        int num = i, sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        hash[sum]++;
    }
    int maximum = 0, cnt = 0;
    for (int i = 0; i < MAX_VAL; ++i) {
        maximum = fmax(maximum, hash[i]);
    }
    for (int i = 0; i < MAX_VAL; ++i) {
        if (hash[i] == maximum) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int ans = countLargestGroup(13);
    printf("%d\n", ans);
    return 0;
}
