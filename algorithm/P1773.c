/**
 * Author: Deean
 * Date: 2023-03-11 14:27
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countMatches(char ***items, int itemsSize, int *itemsColSize, char *ruleKey, char *ruleValue) {
    int cnt = 0, index = 0;
    if (strcmp(ruleKey, "type") == 0) {
        index = 0;
    } else if (strcmp(ruleKey, "color") == 0) {
        index = 1;
    } else if (strcmp(ruleKey, "name") == 0) {
        index = 2;
    }
    for (int i = 0; i < itemsSize; ++i) {
        if (strcmp(items[i][index], ruleValue) == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    arrayEntry *e = arrayParse2D(
            "[[phone,blue,pixel],[computer,silver,lenovo],[phone,gold,iphone]]",
            ARRAY_STRING);
    int colSize[] = {3, 3, 3};
    int ans = countMatches(arrayValue(e), 3, colSize, "color", "sliver");
    printf("%d\n", ans);
    return 0;
}
