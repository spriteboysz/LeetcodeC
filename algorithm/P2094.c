/**
 * Author: Deean
 * Date: 2023-03-06 06:16
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *findEvenNumbers(int *digits, int digitsSize, int *returnSize) {
    int number[10] = {0};
    for (int i = 0; i < digitsSize; ++i) {
        number[digits[i]]++;
    }

    int *even = (int *) malloc(sizeof(int) * 1000);
    int pos = 0;
    for (int i = 100; i < 1000; i += 2) {
        int cnt[10] = {0}, temp = i;
        while (temp) {
            int c = temp % 10;
            if (++cnt[c] > number[c]) {
                break;
            }
            temp /= 10;
        }
        if (temp == 0) {
            even[pos++] = i;
        }
    }
    *returnSize = pos;
    return even;
}

int main() {
    int digits[] = {2, 2, 8, 8, 2};
    int n;
    int *ans = findEvenNumbers(digits, 5, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
