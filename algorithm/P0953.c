/**
 * Author: Deean
 * Date: 2023-03-15 23:03
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int check(char a, char b, char *order) {
    if (a != '\0' && b == '\0') return -1;
    if (a == '\0' && b != '\0') return 1;
    if (a == b) return 0;
    int pos1, pos2;
    for (int i = 0; order[i] != '\0'; ++i) {
        if (order[i] == a) pos1 = i;
        if (order[i] == b) pos2 = i;
    }
    return pos2 - pos1;
}

bool isAlienSorted(char **words, int wordsSize, char *order) {
    if (wordsSize == 1) return true;
    for (int i = 1; i < wordsSize; ++i) {
        int n1 = strlen(words[i - 1]), n2 = strlen(words[i]);
        for (int j = 0, k = 0; j <= n1 && k <= n2; ++j, ++k) {
            int flag = check(words[i - 1][j], words[i][k], order);
            if (flag < 0) return false;
            if (flag > 0) break;
        }
    }
    return true;
}

int main() {
    char *words[] = {"word", "world", "row"};
    int ans = isAlienSorted(words, 3, "worldabcefghijkmnpqstuvxyz");
    printf("%d\n", ans);
    return 0;
}
