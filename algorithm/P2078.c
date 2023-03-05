/**
 * Author: Deean
 * Date: 2023-03-05 22:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maxDistance(int *colors, int colorsSize) {
    if (colors[0] != colors[colorsSize - 1]) return colorsSize - 1;
    int left = 1, right = colorsSize - 2;
    while (colors[0] == colors[left]) {
        left++;
    }
    while (colors[colorsSize - 1] == colors[right]) {
        right--;
    }
    return fmax(right, colorsSize - 1 - left);
}

int main() {
    int colors[] = {1, 1, 1, 6, 1, 1, 1};
    int ans = maxDistance(colors, 7);
    printf("%d\n", ans);
    return 0;
}
