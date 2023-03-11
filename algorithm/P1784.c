/**
 * Author: Deean
 * Date: 2023-03-11 14:43
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool checkOnesSegment(char *s) {
    return !(strstr(s, "10") && strstr(s, "01"));
}

int main() {
    int ans = checkOnesSegment("1001");
    printf("%d\n", ans);
    return 0;
}
