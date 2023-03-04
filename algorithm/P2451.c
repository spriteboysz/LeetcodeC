/**
 * Author: Deean
 * Date: 2023-03-04 15:56
 * FileName: algorithm
 * Description: 2451. 差值数组不同的字符串
 */

#include "..\common\leetcode.h"

char *oddString(char **words, int wordsSize) {
    if (wordsSize == 2) return words[0];
    int n = strlen(words[0]);
    int flag0 = 1, flag1 = 1, flag2 = 1;
    for (int i = 1; i < n; ++i) {
        int diff0 = words[0][i] - words[0][i - 1];
        int diff1 = words[1][i] - words[1][i - 1];
        int diff2 = words[2][i] - words[2][i - 1];
        if (diff0 != diff1) flag2 = 0;
        if (diff0 != diff2) flag1 = 0;
        if (diff1 != diff2) flag0 = 0;
    }
    if (flag0 && flag1 && flag2) {
        for (int i = 3; i < wordsSize; ++i) {
            for (int j = 1; j < n; ++j) {
                int diff0 = words[0][j] - words[0][j - 1];
                int diff = words[i][j] - words[i][j - 1];
                if (diff0 != diff) {
                    return words[i];
                }
            }
        }
    }
    if (flag0) return words[0];
    if (flag1) return words[1];
    return words[2];
}


int main() {
    char *words1[3] = {"adc", "wzy", "abc"};
    char *ans = oddString(words1, 3);
    printf("%s\n", ans);
    char *words2[] = {"mll","edd","jii","tss","fee","dcc","nmm","abb"};
    ans = oddString(words2, 8);
    printf("%s\n", ans);
    return 0;
}
