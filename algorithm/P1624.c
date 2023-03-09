/**
 * Author: Deean
 * Date: 2023-03-09 23:08
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maxLengthBetweenEqualCharacters(char *s) {
    int alphabet[26] = {-1,}, maximum = -1;
    memset(alphabet, -1, sizeof(alphabet));
    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';
        if (alphabet[index] < 0) {
            alphabet[index] = i;
        } else {
            maximum = fmax(maximum, i - alphabet[index] - 1);
        }
    }
    return maximum;
}

int main() {
    int ans = maxLengthBetweenEqualCharacters("abca");
    printf("%d\n", ans);
    return 0;
}
