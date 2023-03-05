/**
 * Author: Deean
 * Date: 2023-03-04 18:03
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int compare(const void *a, const void *b) {
    return ((int *) b)[0] - ((int *) a)[0];
}

char **sortPeople(char **names, int namesSize, int *heights, int heightsSize, int *returnSize) {
    int h[1010][2];
    char **ans = malloc(namesSize * sizeof(char *));
    *returnSize = namesSize;
    for (int i = 0; i < heightsSize; ++i) {
        h[i][0] = heights[i];
        h[i][1] = i;
    }
    qsort(h, heightsSize, sizeof(2 * sizeof(int)), compare);
    for (int i = 0; i < namesSize; ++i) {
        ans[i] = malloc(strlen(names[h[i][1]]) + 1);
        strcpy(ans[i], names[h[i][1]]);
    }
    return ans;
}

int main() {
    char *names[] = {"Mary", "John", "Emma"};
    int heights[] = {180, 165, 170};
    int returnSize = 3;
    char **ans = sortPeople(names, 3, heights, 3, &returnSize);
    for (int i = 0; i < returnSize; ++i) {
        printf("%s\n", ans[i]);
    }
    return 0;
}
