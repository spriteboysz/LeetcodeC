/**
 * Author: Deean
 * Date: 2023-03-12 20:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int minCostToMoveChips(int *position, int positionSize) {
    int odd = 0, even = 0;
    for (int i = 0; i < positionSize; ++i) {
        if (position[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    return fmin(even, odd);
}

int main() {
    int position[] = {2, 2, 2, 3, 3};
    int ans = minCostToMoveChips(position, 5);
    printf("%d\n", ans);
    return 0;
}
