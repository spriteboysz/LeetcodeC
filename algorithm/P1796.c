/**
 * Author: Deean
 * Date: 2023-03-07 21:17
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int secondHighest(char *s) {
    int number[10] = {0};
    for (int i = 0; s[i] != '\0'; ++i) {
        if (isdigit(s[i])) {
            number[s[i] - '0']++;
        }
    }
    int first = 0, second = -1;
    for (int i = 9; i >= 0; i--) {
        if (number[i]) {
            if (first) {
                second = i;
                break;
            } else {
                first = i;
            }
        }
    }
    return second;
}

int main() {
    int ans = secondHighest("dfa12321afd");
    printf("%d\n", ans);
    return 0;
}
