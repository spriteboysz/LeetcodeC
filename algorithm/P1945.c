/**
 * Author: Deean
 * Date: 2023-03-08 22:18
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int getLucky(char *s, int k) {
    int sum = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        sum += (s[i] - 'a' + 1) % 10;
        sum += (s[i] - 'a' + 1) / 10;
    }
    while (k - 1) {
        int temp = 0;
        while (sum) {
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
        k--;
    }
    return sum;
}

int main() {
    int ans = getLucky("leetcode", 2);
    printf("%d\n", ans);
    return 0;
}
