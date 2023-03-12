/**
 * Author: Deean
 * Date: 2023-03-12 13:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int isLeap(int y) {
    return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

int months[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int process(char *date) {
    int yy, mm, dd;
    sscanf(date, "%d-%d-%d", &yy, &mm, &dd);
    for (int i = 1970; i < yy; i++) {
        dd += 365 + (int) isLeap(i);
    }

    for (int i = 1; i < mm; i++) {
        dd += months[i];
        if (i == 2 && isLeap(yy)) dd += 1;
    }
    return dd;
}

int daysBetweenDates(char *date1, char *date2) {
    return abs(process(date1) - process(date2));
}

int main() {
    int ans = daysBetweenDates("2020-01-15", "2019-12-31");
    printf("%d\n", ans);
    return 0;
}
