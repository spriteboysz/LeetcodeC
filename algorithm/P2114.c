/**
 * Author: Deean
 * Date: 2023-03-06 21:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int mostWordsFound(char **sentences, int sentencesSize) {
    int maximum = 0;
    for (int i = 0; i < sentencesSize; ++i) {
        int cnt = 0;
        for (int j = 0; sentences[i][j] != '\0'; ++j) {
            if (sentences[i][j] == ' ') {
                cnt++;
            }
        }
        maximum = fmax(maximum, cnt);
    }
    return maximum + 1;
}

int main() {
    char *sentences[] = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    int ans = mostWordsFound(sentences, 3);
    printf("%d\n", ans);
    return 0;
}
