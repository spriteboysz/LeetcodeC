/**
 * Author: Deean
 * Date: 2023-03-07 22:27
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maximumPopulation(int **logs, int logsSize, int *logsColSize) {
    int years[101] = {0};
    for (int i = 0; i < logsSize; ++i) {
        for (int j = logs[i][0]; j < logs[i][logsColSize[i] - 1]; ++j) {
            years[j - 1950]++;
        }
    }
    int maximum = 0;
    for (int i = 0; i < 101; ++i) {
        maximum = fmax(maximum, years[i]);
    }
    for (int i = 0; i < 101; ++i) {
        if (years[i] == maximum) {
            return i + 1950;
        }
    }
    return -1;
}

int main() {
    arrayEntry *e = arrayParse2D("[[1950,1961],[1960,1971],[1970,1981]]", ARRAY_INT);
    int logColSize[] = {2, 2, 2};
    int ans = maximumPopulation(arrayValue(e), 3, logColSize);
    printf("%d\n", ans);
    return 0;
}
