/**
 * Author: Deean
 * Date: 2023-03-06 21:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool checkString(char *s) {
    return !strstr(s, "ba");
}

int main() {
    int ans = checkString("aaabbb");
    printf("%d\n", ans);
    return 0;
}
