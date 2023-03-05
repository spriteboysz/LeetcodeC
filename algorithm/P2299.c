/**
 * Author: Deean
 * Date: 2023-03-05 16:04
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool strongPasswordCheckerII(char *password) {
    int n = strlen(password);
    if (n < 8) return false;
    char *specialChars = "!@#$%^&*()-+";
    bool specials[128];
    memset(specials, 0, sizeof(specials));
    for (int i = 0; i < specialChars[i] != '\0'; i++) {
        specials[specialChars[i]] = true;
    }

    bool flag1 = false, flag2 = false, flag3 = false, flag4 = false;
    for (int i = 0; i < n; ++i) {
        if (i != n - 1 && password[i] == password[i + 1]) {
            return false;
        }
        char c = password[i];
        if (islower(c)) flag1 = true;
        else if (isupper(c)) flag2 = true;
        else if (isdigit(c)) flag3 = true;
        else if (specials[c]) flag4 = true;
    }
    return flag1 && flag2 && flag3 && flag4;
}

int main() {
    int ans = strongPasswordCheckerII("IloveLe3tcode!");
    printf("%d\n", ans);
    return 0;
}
