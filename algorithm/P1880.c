/**
 * Author: Deean
 * Date: 2023-03-07 22:58
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int process(char *word) {
    int num = 0;
    for (int i = 0; word[i] != '\0'; ++i) {
        num = num * 10 + word[i] - 'a';
    }
    return num;
}

bool isSumEqual(char *firstWord, char *secondWord, char *targetWord) {
    return process(firstWord) + process(secondWord) == process(targetWord);
}

int main() {
    int ans = isSumEqual("acb", "cba", "cdb");
    printf("%d\n", ans);
    return 0;
}
