/**
 * Author: Deean
 * Date: 2023-03-14 20:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

char *gcdOfStrings(char *str1, char *str2) {
    int n1 = strlen(str1), n2 = strlen(str2);
    char *ss1 = (char *) malloc(sizeof(char *) * (n1 + n2 + 1));
    char *ss2 = (char *) malloc(sizeof(char *) * (n1 + n2 + 1));
    strcpy(ss1, str1);
    strcat(ss1, str2);
    strcpy(ss2, str2);
    strcat(ss2, str1);
    if (strcmp(ss1, ss2) != 0) return "";
    int pos = gcd(n1, n2);
    ss1[pos] = '\0';
    free(ss2);
    return ss1;
}

int main() {
    char *ans = gcdOfStrings("ABCABC", "ABC");
    puts(ans);
    return 0;
}
