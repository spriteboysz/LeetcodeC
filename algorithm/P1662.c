/**
 * Author: Deean
 * Date: 2023-03-10 22:03
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *join(char **word, int wordSize) {
    char *ss = (char *) malloc(sizeof(char) * wordSize * 1000 + 1);
    int pos = 0;
    for (int i = 0; i < wordSize; ++i) {
        pos += sprintf(ss + pos, "%s", word[i]);
    }
    return ss;
}

bool arrayStringsAreEqual(char **word1, int word1Size, char **word2, int word2Size) {
    char *ss1 = join(word1, word1Size);
    char *ss2 = join(word2, word2Size);
    bool ret = strcmp(ss1, ss2) == 0;
    free(ss1);
    free(ss2);
    return ret;
}


int main() {
    char *word1[] = {"ab", "c"}, *word2[] = {"a", "bc"};
    int ans = arrayStringsAreEqual(word1, 2, word2, 2);
    printf("%d\n", ans);
    return 0;
}
