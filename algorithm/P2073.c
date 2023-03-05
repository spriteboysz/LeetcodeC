/**
 * Author: Deean
 * Date: 2023-03-05 22:41
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int timeRequiredToBuy(int *tickets, int ticketsSize, int k) {
    int cnt = 0, i = 0;
    while (tickets[k]) {
        if (tickets[i]) {
            tickets[i]--;
            cnt++;
        }
        i++;
        i %= ticketsSize;
    }
    return cnt;
}

int main() {
    int tickets[] = {2, 3, 2};
    int ans = timeRequiredToBuy(tickets, 3, 2);
    printf("%d\n", ans);
    return 0;
}
