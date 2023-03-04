/**
 * Author: Deean
 * Date: 2023-03-04 12:27
 * FileName: algorithm
 * Description: 2515. 到目标字符串的最短距离
 */

#include "..\common\leetcode.h"

int closetTarget(char **words, int wordsSize, char *target, int startIndex) {
    if (strcmp(target, words[startIndex]) == 0) {
        return 0;
    }
    int cnt = 0, left = startIndex, right = startIndex;
    do {
        if (strcmp(target, words[right]) == 0 || strcmp(target, words[left]) == 0) {
            break;
        } else {
            cnt++;
            right = (right + 1) % wordsSize;
            left = (left - 1 + wordsSize) % wordsSize;
        }
    } while (right != startIndex);
    return right == startIndex ? -1 : cnt;
}

int main() {
    arrayEntry *e = arrayParse1D("[\"hello\",\"i\",\"am\",\"leetcode\",\"hello\"]", ARRAY_STRING);
    int ans = closetTarget(arrayValue(e), arraySize(e), "Hello", 1);
    printf("%d\n", ans);
    assert(ans == 1);
    return 0;
}
