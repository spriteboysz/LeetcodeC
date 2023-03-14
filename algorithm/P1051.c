/**
 * Author: Deean
 * Date: 2023-03-14 20:59
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int heightChecker(int *heights, int heightsSize) {
    int *sorted = (int *) malloc(sizeof(int) * heightsSize);
    memcpy(sorted, heights, sizeof(int) * heightsSize);
    qsort(sorted, heightsSize, sizeof(int), cmp);
    int cnt = 0;
    for (int i = 0; i < heightsSize; ++i) {
        if (sorted[i] != heights[i]) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int heights[] = {1, 1, 4, 2, 1, 3};
    int ans = heightChecker(heights, 6);
    printf("%d\n", ans);
    return 0;
}
