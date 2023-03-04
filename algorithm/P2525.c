/**
 * Author: Deean
 * Date: 2023-03-04 11:56
 * FileName: algorithm
 * Description: 2525. 根据规则将箱子分类
 */

#include "..\common\leetcode.h"

char *categorizeBox(int length, int width, int height, int mass) {
    long long volume = (long long) length * (long long) width * (long long) height;
    int bulky = length >= 1e4 || width >= 1e4 || height >= 1e4 || volume >= 1e9;
    int heavy = mass >= 100;
    if (bulky && heavy) {
        return "Both";
    } else if (bulky) {
        return "Bulky";
    } else if (heavy) {
        return "Heavy";
    }
    return "Neither";
}

int main() {
    char *ans = categorizeBox(1000, 35, 700, 300);
    printf("%s\n", ans);
    assert(strcmp(ans, "Heavy") == 0);
    return 0;
}
