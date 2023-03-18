/**
 * Author: Deean
 * Date: 2023-03-18 07:32
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int numJewelsInStones(char *jewels, char *stones) {
    int n1 = strlen(jewels), n2 = strlen(stones), cnt = 0;
    for (int i = 0; i < n2; ++i) {
        for (int j = 0; j < n1; ++j) {
            if (stones[i] == jewels[j]) {
                cnt++;
                break;
            }
        }
    }
    return cnt;
}

int main() {
    int ans = numJewelsInStones("aA", "aAAbbbb");
    printf("%d\n", ans);
    return 0;
}
