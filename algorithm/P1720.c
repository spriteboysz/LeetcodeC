/**
 * Author: Deean
 * Date: 2023-03-10 23:55
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *decode(int *encoded, int encodedSize, int first, int *returnSize) {
    int *decoded = (int *) malloc(sizeof(int) * (encodedSize + 1));
    decoded[0] = first;
    for (int i = 0; i < encodedSize; ++i) {
        decoded[i + 1] = decoded[i] ^ encoded[i];
    }
    *returnSize = encodedSize + 1;
    return decoded;
}

int main() {
    int encoded[] = {1, 2, 3};
    int n;
    int *ans = decode(encoded, 3, 1, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
