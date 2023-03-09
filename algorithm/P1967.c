/**
 * Author: Deean
 * Date: 2023-03-08 23:01
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int numOfStrings(char **patterns, int patternsSize, char *word) {
    int cnt = 0;
    for (int i = 0; i < patternsSize; ++i) {
        if (strstr(word, patterns[i])) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    char *patterns[] = {"a", "abc", "bc", "d"};
    int ans = numOfStrings(patterns, 4, "abc");
    printf("%d\n", ans);
    return 0;
}
