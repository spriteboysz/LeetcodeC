/**
 * Author: Deean
 * Date: 2023-03-04 13:52
 * FileName: algorithm
 * Description: 2469. 温度转换
 */

#include "..\common\leetcode.h"

double *convertTemperature(double celsius, int *returnSize) {
    double *temperature = (double *) malloc(sizeof(double) * 2);
    temperature[0] = celsius + 273.15;
    temperature[1] = celsius * 1.80 + 32.0;
    *returnSize = 2;
    return temperature;
}

int main() {
    int n = 2;
    double *ans = convertTemperature(36.50, &n);
    for (int i = 0; i < n; ++i) {
        printf("%f\n", ans[i]);
    }
    return 0;
}
