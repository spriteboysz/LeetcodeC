/**
 * Author: Deean
 * Date: 2023-03-05 17:40
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) b - *(int *) a;
}

char *bestHand(int *ranks, int ranksSize, char *suits, int suitsSize) {
    int ans[14] = {0}, str[4] = {0};
    for (int i = 0; i < ranksSize; i++) {
        ans[ranks[i]]++;
        str[suits[i] - 'a']++;
    }
    qsort(ans, 14, sizeof(int), cmp);
    qsort(str, 4, sizeof(int), cmp);
    if (str[0] == 5) return "Flush";
    if (ans[0] >= 3) return "Three of a Kind";
    if (ans[0] == 2) return "Pair";
    return "High Card";
}

int main() {
    int ranks[] = {4, 4, 2, 4, 4};
    char suits[] = {'d', 'a', 'a', 'b', 'c'};
    char *ans = bestHand(ranks, 5, suits, 5);
    puts(ans);
    return 0;
}
