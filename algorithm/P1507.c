/**
 * Author: Deean
 * Date: 2023-03-11 18:56
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *reformatDate(char *date) {
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    char *ans = malloc(sizeof(char) * 11);
    int mm = 0, dd, yy;
    char month[5] = "\0";
    sscanf(date, "%2d%*3c%3s%*1c%d", &dd, month, &yy);

    while (strcmp(month, months[mm])) {
        mm++;
    }
    sprintf(ans, "%4d-%02d-%02d", yy, mm + 1, dd);
    return ans;
}

int main() {
    char *ans = reformatDate("20th Oct 2052");
    puts(ans);
    return 0;
}
