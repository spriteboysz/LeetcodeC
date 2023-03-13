/**
 * Author: Deean
 * Date: 2023-03-13 23:40
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int *distributeCandies(int candies, int num_people, int *returnSize) {
    int *distribute = (int *) malloc(sizeof(int) * num_people);
    memset(distribute, 0, sizeof(int) * num_people);
    int i, n = 1;
    for (i = 0; candies > n; i = (i + 1) % num_people) {
        distribute[i] += n;
        candies -= n;
        n++;
    }
    distribute[i] += candies;
    *returnSize = num_people;
    return distribute;
}

int main() {
    int n;
    int *ans = distributeCandies(7, 4, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
