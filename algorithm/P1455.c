/**
 * Author: Deean
 * Date: 2023-03-11 16:37
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int isPrefixOfWord(char *sentence, char *searchWord) {
    int ret = -1, num = 1;
    char *p = strtok(sentence, " ");
    while (p != NULL) {
        if (strlen(searchWord) <= strlen(p) && strncmp(p, searchWord, strlen(searchWord)) == 0) {
            ret = num;
            break;
        }
        p = strtok(NULL, " ");
        num++;
    }
    return ret;
}

int main() {
    int ans = isPrefixOfWord("i love eating burger", "burg");
    printf("%d\n", ans);
    return 0;
}
