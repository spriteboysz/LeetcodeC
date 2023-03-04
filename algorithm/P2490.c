/**
 * Author: Deean
 * Date: 2023-03-04 13:33
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isCircularSentence(char *sentence) {
    int n = strlen(sentence);
    for (int i = 0; i < n; ++i) {
        if (sentence[i] == ' ' && sentence[i - 1] != sentence[i + 1]) {
            return false;
        }
    }
    return sentence[0] == sentence[n - 1];
}

int main() {
    bool ans = isCircularSentence("leetcode exercises sound delightful");
    printf("%d\n", ans);
    return 0;
}
