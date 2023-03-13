/**
 * Author: Deean
 * Date: 2023-03-12 22:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isLeap(int year) {
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

char *dayOfTheWeek(int day, int month, int year) {
    char *weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = day;
    for (int i = 1971; i < year; ++i) {
        days += 365 + (int) isLeap(i);
    }
    if (isLeap(year)) {
        months[2] += 1;
    }
    for (int i = 0; i < month; ++i) {
        days += months[i];
    }
    return weekdays[(days + 4) % 7];
}

int main() {
    char *ans = dayOfTheWeek(29, 2, 2016);
    puts(ans);
    return 0;
}
