/**
 * Author: Deean
 * Date: 2023-03-15 21:59
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int findJudge(int n, int **trust, int trustSize, int *trustColSize) {
    int *in = (int *) malloc(sizeof(int) * (n + 1));
    int *out = (int *) malloc(sizeof(int) * (n + 1));
    memset(in, 0, sizeof(int) * (n + 1));
    memset(out, 0, sizeof(int) * (n + 1));
    for (int i = 0; i < trustSize; ++i) {
        in[trust[i][trustColSize[i] - 1]]++;
        out[trust[i][0]]++;
    }

    int judge = -1;
    for (int i = 1; i <= n; ++i) {
        if (in[i] == n - 1 && out[i] == 0) {
            judge = i;
            break;
        }
    }
    free(in);
    free(out);
    return judge;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1,3],[2,3]]", ARRAY_INT);
    int colSize[] = {2, 2};
    int ans = findJudge(3, arrayValue(e), 2, colSize);
    printf("%d\n", ans);
    return 0;
}
