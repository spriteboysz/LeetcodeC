/**
 * Author: Deean
 * Date: 2023-03-06 06:39
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int countPoints(char *rings) {
    int rods[10] = {0};
    for (int i = 0; rings[i] != '\0'; i += 2) {
        int index = rings[i + 1] - '0';
        switch (rings[i]) {
            case 'B':
                rods[index] |= 1;
                break;
            case 'G':
                rods[index] |= 2;
                break;
            case 'R':
                rods[index] |= 4;
                break;
            default:
                break;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 10; ++i) {
        if (rods[i] == 7) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int ans = countPoints("B0B6G0R6R0R6G9");
    printf("%d\n", ans);
    return 0;
}
