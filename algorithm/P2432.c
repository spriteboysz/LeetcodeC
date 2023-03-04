/**
 * Author: Deean
 * Date: 2023-03-04 17:10
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int hardestWorker(int n, int **logs, int logsSize, int *logsColSize) {
    int id = logs[0][0], maximum = logs[0][*logsColSize-1];
    for (int i = 1; i < logsSize; ++i) {
        int time = logs[i][1] - logs[i - 1][1];
        if (maximum < time || (maximum == time && id > logs[i][0])) {
            maximum = time;
            id = logs[i][0];
        }
    }
    return id;
}

int main() {
    arrayEntry *e = arrayParse2D("[[0,3],[2,5],[0,9],[1,15]]", ARRAY_INT);
    int m = 2;
    int ans = hardestWorker(10, arrayValue(e), 4, &m);
    printf("%d\n", ans);
    return 0;
}
