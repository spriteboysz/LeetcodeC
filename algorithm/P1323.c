/**
 * Author: Deean
 * Date: 2023-03-12 16:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maximum69Number(int num) {
    int cnt = -1, th = -1, temp = num;
    while (temp) {
        cnt++;
        if (temp % 10 == 6) {
            th = cnt;
        }
        temp /= 10;
    }
    return th == -1 ? num : num + 3 * pow(10, th);
}

int main() {
    int ans = maximum69Number(9669);
    printf("%d\n", ans);
    return 0;
}
