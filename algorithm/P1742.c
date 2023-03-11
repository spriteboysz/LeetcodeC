/**
 * Author: Deean
 * Date: 2023-03-11 13:40
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MAX_VALUE 46

int countBalls(int lowLimit, int highLimit) {
    int number[MAX_VALUE] = {0};
    for (int i = lowLimit; i <= highLimit; ++i) {
        int sum = 0, num = i;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        number[sum]++;
    }
    int maximum = 0;
    for (int i = 0; i < MAX_VALUE; ++i) {
        maximum = fmax(maximum, number[i]);
    }
    return maximum;
}

int main() {
    int ans = countBalls(5, 15);
    printf("%d\n", ans);
    return 0;
}
