/**
 * Author: Deean
 * Date: 2023-03-04 16:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countTime(char *time) {
    int cnt = 0;
    for (int i = 0; i < 24 * 60; ++i) {
        int hh = i / 60, mm = i % 60;
        char s[6];
        bool flag = true;
        sprintf(s, "%02d:%02d", hh, mm);
        for (int j = 0; j < 5; ++j) {
            if (time[j] != '?' && time[j] != s[j]) {
                flag = false;
                break;
            }
        }
        if (flag) cnt++;
    }
    return cnt;
}

int main() {
    int ans = countTime("0?:0?");
    printf("%d\n", ans);
    return 0;
}
