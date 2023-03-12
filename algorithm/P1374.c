/**
 * Author: Deean
 * Date: 2023-03-12 13:09
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *generateTheString(int n) {
    char *ss = (char *) malloc(sizeof(char) * (n + 1));
    memset(ss, 'a', sizeof(char) * n);
    if (n % 2 == 0) {
        ss[n - 1] = 'b';
    }
    ss[n] = '\0';
    return ss;
}

int main() {
    printf("%s\n", generateTheString(3));
    printf("%s\n", generateTheString(4));
    return 0;
}
