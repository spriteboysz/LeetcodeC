/**
 * Author: Deean
 * Date: 2023-03-02 23:28
 * FileName: algorithm
 * Description: 2409. 统计共同度过的日子数
 */

#include "..\common\leetcode.h"

int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int process(const char *date) {
    int mm = (date[0] - '0') * 10 + date[1] - '0';
    int dd = (date[3] - '0') * 10 + date[4] - '0';
    for (int i = 1; i <= mm; i++) {
        dd += month[i - 1];
    }
    return dd;
}

int countDaysTogether(char *arriveAlice, char *leaveAlice, char *arriveBob, char *leaveBob) {
    return (int) fmax(0,
                      fmin(process(leaveAlice), process(leaveBob))
                      - fmax(process(arriveAlice), process(arriveBob))
                      + 1);
}


int main() {
    int ans = countDaysTogether("08-15", "08-18", "08-16", "08-19");
    printf("%d\n", ans);
    ans = countDaysTogether("09-01", "10-19", "06-19", "10-20");
    printf("%d\n", ans);
    return 0;
}

