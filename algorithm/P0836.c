/**
 * Author: Deean
 * Date: 2023-03-16 23:03
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isRectangleOverlap(int *rec1, int rec1Size, int *rec2, int rec2Size) {
    return rec2[2] > rec1[0]
           && rec2[0] < rec1[2]
           && rec2[1] < rec1[rec1Size - 1]
           && rec2[rec2Size - 1] > rec1[1];
}

int main() {
    int rec1[] = {0, 0, 2, 2};
    int rec2[] = {1, 1, 3, 3};
    int ans = isRectangleOverlap(rec1, 4, rec2, 4);
    printf("%d\n", ans);
    return 0;
}
