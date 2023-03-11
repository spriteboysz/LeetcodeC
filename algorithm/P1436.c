/**
 * Author: Deean
 * Date: 2023-03-11 15:15
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *destCity(char ***paths, int pathsSize, int *pathsColSize) {
    for (int i = 0; i < pathsSize; ++i) {
        bool flag = false;
        for (int j = 0; j < pathsSize; ++j) {
            if (strcmp(paths[i][1], paths[j][0]) == 0) {
                flag = true;
                break;
            }
        }
        if (!flag) return paths[i][pathsColSize[i] - 1];
    }
    return NULL;
}

int main() {
    arrayEntry *e = arrayParse2D("[[London,New York],[New York,Lima],[Lima,Sao Paulo]]", ARRAY_STRING);
    int colSize[] = {2, 2, 2};
    char *ans = destCity(arrayValue(e), 3, colSize);
    puts(ans);
    return 0;
}
