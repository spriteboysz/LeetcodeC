/**
 * Author: Deean
 * Date: 2023-03-10 22:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maxRepeating(char *sequence, char *word) {
    int maximum = 0, n = strlen(sequence);
    int cnt = n / strlen(word);
    char *buff = (char *) malloc(sizeof(char) * (n + 1));
    memset(buff, 0, sizeof(char) * (n + 1));
    for (int i = 1; i <= cnt; ++i) {
        strcat(buff, word);
        if (strstr(sequence, buff) != NULL) {
            maximum = i;
        }
    }
    return maximum;
}

int main() {
    int ans = maxRepeating("ababc", "ab");
    printf("%d\n", ans);
    return 0;
}
