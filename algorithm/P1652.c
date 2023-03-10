/**
 * Author: Deean
 * Date: 2023-03-10 21:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *decrypt(int *code, int codeSize, int k, int *returnSize) {
    int *decode = (int *) malloc(sizeof(int) * codeSize);
    memset(decode, 0, sizeof(int) * codeSize);
    *returnSize = codeSize;
    int j;
    if (k == 0) return decode;
    if (k > 0) {
        for (int i = 0; i < codeSize; ++i) {
            int sum = 0, cnt = 1;
            j = i + 1;
            while (cnt <= k) {
                j %= codeSize;
                sum += code[j++];
                cnt++;
            }
            decode[i] = sum;
        }
    } else {
        k = -k;
        for (int i = 0; i < codeSize; ++i) {
            int sum = 0, cnt = 1;
            j = i - 1;
            while (cnt <= k) {
                if (j < 0) j += codeSize;
                sum += code[j--];
                cnt++;
            }
            decode[i] = sum;
        }
    }
    return decode;
}

int main() {
    int code[] = {5, 7, 1, 4};
    int n;
    int *ans = decrypt(code, 4, 3, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
