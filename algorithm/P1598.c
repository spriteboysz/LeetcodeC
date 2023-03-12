/**
 * Author: Deean
 * Date: 2023-03-11 22:02
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int minOperations(char **logs, int logsSize) {
    int depth = 0;
    for (int i = 0; i < logsSize; ++i) {
        if (!strcmp(logs[i], "./")) {
            continue;
        } else if (!strcmp(logs[i], "../")) {
            if (depth > 0) depth--;
        } else {
            depth++;
        }
    }
    return depth;
}

int main() {
    char *logs[] = {"d1/", "d2/", "../", "d21/", "./"};
    int ans = minOperations(logs, 5);
    printf("%d\n", ans);
    return 0;
}
