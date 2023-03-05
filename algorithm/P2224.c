/**
 * Author: Deean
 * Date: 2023-03-04 19:29
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int process(char *time) {
    int hh = (time[0] - '0') * 10 + time[1] - '0';
    int mm = (time[3] - '0') * 10 + time[4] - '0';
    return hh * 60 + mm;
}

int convertTime(char * current, char * correct){
    int interval[] = {60, 15, 5, 1};
    int cnt = 0, t = process(correct) - process(current);
    for (int i = 0; i < 4; ++i) {
        cnt += t / interval[i];
        t %= interval[i];
    }
    return cnt;
}

int main() {
    int ans = convertTime("02:30", "04:36");
    printf("%d\n", ans);
    return 0;
}
