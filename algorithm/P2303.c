/**
 * Author: Deean
 * Date: 2023-03-05 16:14
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MIN(a, b) ((a) < (b) ? (a) : (b))

double calculateTax(int **brackets, int bracketsSize, int *bracketsColSize, int income) {
    int tax = 0, lower = 0;
    for (int i = 0; i < bracketsSize; ++i) {
        int upper = brackets[i][0], percent = brackets[i][*bracketsColSize - 1];
        int cur = (MIN(income, upper) - lower) * percent;
        tax += cur;
        lower = upper;
        if (income <= upper) break;
    }
    return (double) tax / 100.0;
}

int main() {
    arrayEntry *e = arrayParse2D("[[3,50],[7,10],[12,25]]", ARRAY_INT);
    int m = 2;
    double ans = calculateTax(arrayValue(e), 3, &m, 10);
    printf("%f\n", ans);
    return 0;
}
