/**
 * Author: Deean
 * Date: 2023-03-05 18:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int minimumRecolors(char *blocks, int k) {
    int cnt = 0;
    for (int i = 0; i < k; i++) {
        if (blocks[i] == 'W') cnt++;
    }
    int minimum = cnt;
    for (int i = 1; i + k - 1 < strlen(blocks); i++) {
        if (blocks[i - 1] == 'W') cnt--;
        if (blocks[i + k - 1] == 'W') cnt++;
        minimum = fmin(minimum, cnt);
    }
    return minimum;
}

int main() {
    int ans = minimumRecolors("WBBWWBBWBW", 7);
    printf("%d\n", ans);
    return 0;
}
