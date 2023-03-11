/**
 * Author: Deean
 * Date: 2023-03-11 19:19
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *restoreString(char *s, int *indices, int indicesSize) {
    char *ss = (char *) malloc(sizeof(char) * (indicesSize + 1));
    for (int i = 0; i < indicesSize; ++i) {
        ss[indices[i]] = s[i];
    }
    ss[indicesSize] = '\0';
    return ss;
}

int main() {
    int indices[] = {4, 5, 6, 7, 0, 2, 1, 3};
    char *ans = restoreString("codeleet", indices, 8);
    puts(ans);
    return 0;
}
