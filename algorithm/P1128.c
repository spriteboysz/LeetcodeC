/**
 * Author: Deean
 * Date: 2023-03-12 23:21
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int numEquivDominoPairs(int **dominoes, int dominoesSize, int *dominoesColSize) {
    int hash[100] = {0}, cnt = 0;
    for (int i = 0; i < dominoesSize; ++i) {
        int a = dominoes[i][0], b = dominoes[i][1];
        int index = fmin(a, b) * 10 + fmax(a, b);
        cnt += hash[index];
        hash[index]++;
    }
    return cnt;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,2],[2,1],[3,4],[5,6]]", ARRAY_INT);
    int cols[] = {2, 2, 2, 2};
    int ans = numEquivDominoPairs(arrayValue(e), 4, cols);
    printf("%d\n", ans);
    return 0;
}
