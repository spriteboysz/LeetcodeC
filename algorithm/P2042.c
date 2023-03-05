/**
 * Author: Deean
 * Date: 2023-03-05 20:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool areNumbersAscending(char *s) {
    int pre = 0;
    for (int i = 0; s[i] != '\0';) {
        if (isdigit(s[i])) {
            int cur = 0;
            while (s[i] != '\0' && isdigit(s[i])) {
                cur = cur * 10 + s[i] - '0';
                i++;
            }
            if (cur <= pre) {
                return false;
            }
            pre = cur;
        } else {
            i++;
        }
    }
    return true;
}

int main() {
    int ans = areNumbersAscending("1 box has 3 blue 4 red 6 green and 12 yellow marbles");
    printf("%d\n", ans);
    return 0;
}
