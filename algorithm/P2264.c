/**
 * Author: Deean
 * Date: 2023-03-05 10:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char target[10][4] = {"999", "888", "777", "666", "555", "444", "333", "222", "111", "000"};

char *largestGoodInteger(char *num) {
    for (int i = 0; i < 10; ++i) {
        if (strstr(num, target[i]) != NULL) {
            return target[i];
        }
    }
    return "";
}

int main() {
    char *ans = largestGoodInteger("6777133339");
    puts(ans);
    return 0;
}
