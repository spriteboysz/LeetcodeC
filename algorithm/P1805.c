/**
 * Author: Deean
 * Date: 2023-03-07 21:38
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int numDifferentIntegers(char *word) {
    int nums[60] = {0}, cnt = 0;
    for (int i = 0; word[i] != '\0';) {
        while (word[i] >= 'a' && word[i] <= 'z') {
            i++;
        }
        if (word[i] == '\0') break;

        int sum = 0;
        while (word[i] >= '0' && word[i] <= '9') {
            sum = sum * 10 + word[i] - '0';
            sum %= 1000000;
            i++;
        }
        bool flag = true;
        for (int j = 0; j < cnt; ++j) {
            if (nums[j] == sum) {
                flag = false;
                break;
            }
        }
        if (flag) nums[cnt++] = sum;
    }
    return cnt;
}

int main() {
    int ans = numDifferentIntegers("a123bc34d8ef34");
    printf("%d\n", ans);
    return 0;
}
