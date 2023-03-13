/**
 * Author: Deean
 * Date: 2023-03-13 23:31
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *defangIPaddr(char *address) {
    int n = strlen(address);
    char *ss = (char *) malloc(sizeof(char) * (n + 7));
    int pos = 0;
    for (int i = 0; i < n; ++i) {
        if (address[i] == '.') {
            ss[pos++] = '[';
            ss[pos++] = '.';
            ss[pos++] = ']';
        } else {
            ss[pos++] = address[i];
        }
    }
    ss[pos] = '\0';
    return ss;
}

int main() {
    char *ans = defangIPaddr("255.100.50.0");
    puts(ans);
    return 0;
}
