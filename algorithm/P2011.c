/**
 * Author: Deean
 * Date: 2023-03-05 19:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int finalValueAfterOperations(char **operations, int operationsSize) {
    int x = 0;
    for (int i = 0; i < operationsSize; ++i) {
        if (operations[i][1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    return x;
}

int main() {
    char *operations[] = {"--X", "X++", "X++"};
    int ans = finalValueAfterOperations(operations, 3);
    printf("%d\n", ans);
    return 0;
}
