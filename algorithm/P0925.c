/**
 * Author: Deean
 * Date: 2023-03-17 22:53
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isLongPressedName(char *name, char *typed) {
    int i = 0, j = 0, n1 = strlen(name), n2 = strlen(typed);
    while (j < n2) {
        if (i < n1 && name[i] == typed[j]) {
            i++;
            j++;
        } else if (j > 0 && typed[j] == typed[j - 1]) {
            j++;
        } else {
            return false;
        }
    }
    return i == n1;
}

int main() {
    int ans = isLongPressedName("alex", "aaleex");
    printf("%d\n", ans);
    return 0;
}
