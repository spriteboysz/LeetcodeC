/**
 * Author: Deean
 * Date: 2023-03-07 23:30
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *largestOddNumber(char *num) {
    for (int i = strlen(num) - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 == 1) {
            num[i + 1] = '\0';
            return num;
        }
    }
    return "";
}

int main() {
    char *ans = largestOddNumber("35427");
    puts(ans);
    return 0;
}
