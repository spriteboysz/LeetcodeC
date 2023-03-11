/**
 * Author: Deean
 * Date: 2023-03-11 17:40
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

double average(int *salary, int salarySize) {
    int max = 0, min = INT_MAX, sum = 0;
    for (int i = 0; i < salarySize; ++i) {
        sum += salary[i];
        max = fmax(max, salary[i]);
        min = fmin(min, salary[i]);
    }
    return (sum - max - min) * 1.0 / (salarySize - 2);
}

int main() {
    int salary[] = {4000, 3000, 1000, 2000};
    double ans = average(salary, 4);
    printf("%f\n", ans);
    return 0;
}
