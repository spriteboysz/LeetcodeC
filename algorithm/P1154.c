/**
 * Author: Deean
 * Date: 2023-03-12 22:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isLeap(int year) {
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

int dayOfYear(char *date) {
    int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int yy, mm, dd, days = 0;
    sscanf(date, "%d-%d-%d", &yy, &mm, &dd);
    days += dd;
    if (isLeap(yy)) months[2] += 1;
    for (int i = 0; i < mm; ++i) {
        days += months[i];
    }
    return days;
}

int main() {
    int ans = dayOfYear("2019-02-10");
    printf("%d\n", ans);
    return 0;
}
