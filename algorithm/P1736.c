/**
 * Author: Deean
 * Date: 2023-03-11 13:24
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *maximumTime(char *time) {
    char *cur = (char *) malloc(sizeof(char) * 6);
    for (int i = 24 * 60 - 1; i >= 0; i--) {
        int hh = i / 60, mm = i % 60;
        sprintf(cur, "%02d:%02d", hh, mm);
        bool flag = true;
        for (int j = 0; cur[j] != '\0'; j++) {
            if (time[j] != '?' && cur[j] != time[j]) {
                flag = false;
                break;
            }
        }
        if (flag) return cur;
    }
    return "";
}

int main() {
    char *ans = maximumTime("2?:?0");
    printf("%s\n", ans);
    return 0;
}
