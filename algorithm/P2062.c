/**
 * Author: Deean
 * Date: 2023-03-05 22:21
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int process(char *word, int i, int j) {
    int mask = 0, flag = 1;
    for (int k = i; k <= j; ++k) {
        switch (word[k]) {
            case 'a':
                mask |= 1;
                break;
            case 'e':
                mask |= 2;
                break;
            case 'i':
                mask |= 4;
                break;
            case 'o':
                mask |= 8;
                break;
            case 'u':
                mask |= 16;
                break;
            default:
                flag = 0;
                break;
        }
    }
    return flag && mask == 31;
}

int countVowelSubstrings(char *word) {
    int n = strlen(word), cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            cnt += process(word, i, j);
        }
    }
    return cnt;
}

int main() {
    char *word = "cuaieuouac";
    int ans = countVowelSubstrings(word);
    printf("%d\n", ans);
    return 0;
}
